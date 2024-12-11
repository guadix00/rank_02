/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:41:32 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 19:46:05 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}
void puthex(int nb)
{
	char *base = "0123456789abcdef";
	if (nb > 15)
		puthex(nb / 16);
	write(1, &base[nb % 16], 1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		puthex(nb);	
	}
	write(1, "\n" ,1);
}
