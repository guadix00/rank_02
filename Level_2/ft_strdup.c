/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 20:01:09 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/07 20:06:53 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	while (src[len])
		len++;
	char *new_str = malloc(sizeof(char) * len + 1);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return(new_str);
}

#include <stdio.h>

int main()
{
	printf("%s", ft_strdup(""));
}
