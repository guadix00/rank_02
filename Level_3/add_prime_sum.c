/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:20:09 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 15:36:10 by gualvare         ###   ########.fr       */
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
int is_prime(int nb)
{
	int i = 2;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
void ft_putnbr(int nb)
{
	char *base = "0123456789";
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &base[nb % 10], 1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		int res = 0;
		while (nb > 1)
		{
			if (is_prime(nb))
				res = res + nb;
			nb--;
		}
		ft_putnbr(res);
	
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
}	
