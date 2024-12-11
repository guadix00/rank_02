/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:32:41 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 19:35:57 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putnbr(int nb)
{
	char *base = "0123456789";
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &base[nb % 10], 1);
}
int main(int argc, char **argv)
{
	(void)argv;	
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}
