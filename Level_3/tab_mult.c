/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:57:51 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 20:08:48 by gualvare         ###   ########.fr       */
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
void putnbr(int nb)
{
	char *base = "0123456789";
	if (nb > 9)
		putnbr(nb / 10);
	write(1, &base[nb % 10], 1);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "\n" ,1);
	else
	{
		int num = ft_atoi(argv[1]);
		int i = 1;
		while (i < 10)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(num);
			write(1, " = ", 3);
			putnbr(num * i);
			write(1, "\n", 1);
			i++;
		}
	}
}
