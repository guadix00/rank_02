/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:07:48 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/12 13:29:01 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int num_counter(int nb)
{
	int len = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb / 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int len = num_counter(nbr);
	char *new_str = malloc(sizeof(char) * len + 1);
	new_str[len--] = '\0';
	if (nbr < 0)
	{
		new_str[0] = '-';
		nbr = nbr * -1;
	}
	if (nbr == 0)
		new_str[0] = '0';
	while (nbr)
	{
		new_str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;		
	}
	return (new_str);
}
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(34567890));
}
