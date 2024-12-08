/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:46:12 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 18:50:58 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;
	int check = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;	
		}
		if (check == 0)
			return (i);
		i++;	
	}
	return (i);
}

int main()
{
	printf("%zu", ft_strspn("hola", "ola"));
	printf("%lu", strspn("hola", "ola"));
}
