/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:51:25 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 18:55:58 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;	
		}
		i++;	
	}
	return (NULL);
}

int main()
{	
	printf("%s", ft_strpbrk("", ""));
	printf("%s", strpbrk("", ""));

}
