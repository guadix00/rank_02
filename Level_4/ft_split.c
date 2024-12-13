/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:38:13 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/12 12:48:40 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
char    **ft_split(char *str)
{
	int word = 0;
	int i = 0;
	int start = 0;
	int end = 0;
	int id_word = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	char **new_str = malloc(sizeof(char *) * (word + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		end = i;
		if (end > start)
		{
			new_str[id_word] = malloc(sizeof(char) * (end - start) + 1);
			ft_strncpy(new_str[id_word], &str[start], (end - start));
			id_word++;
		}
	}
	new_str[id_word] = NULL;
	return (new_str);
}

int main(int argc, char **argv)
{
	int i = 0;
	char **res = ft_split(argv[1]);
	while (res[i])
	{
		printf("%s\n", res[i]);
	   	i++;	
	}
}
