/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:45:25 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/07 20:03:50 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return(i);
}


int main()
{
	printf("%zu\n", ft_strcspn("hola", "ola"));
	printf("%lu\n", strcspn("hola", "ola"));
}
