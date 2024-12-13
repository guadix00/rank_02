/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:49:08 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/12 13:19:54 by gualvare         ###   ########.fr       */
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
char **ft_split(char *str)
{
	int word = 0;
	int start = 0;
	int end = 0;
	int id = 0;
	int i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == 32 || str[i] == 9 || str[i] == '\n')
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != 32 && str[i] != 9 && str[i] != '\n')
			i++;	
	}
	char **new_str = malloc(sizeof(char *) * (word + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == 32 || str[i] == 9 || str[i] == '\n')
			i++;
		start = i;
		while (str[i] && str[i] != 32 && str[i] != 9 && str[i] != '\n')
			i++;
		end = i;
		if (end > start)
		{
			new_str[id] = malloc(sizeof(char) * (end - start) + 1);
			ft_strncpy(new_str[id], &str[start], (end - start));
			id++;
		}		
	}
	new_str[id] = NULL;
	return (new_str);
}
#include <unistd.h> 
int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		char *str = argv[1];
		int i = 1;
		int j = 0;
		char **res = ft_split(str);
		while (res[i])
		{
			j = 0;
			while (res[i][j])
				write(1, &res[i][j++], 1);
			write(1, " ", 1);
			i++;
		}
		j = 0;
		while (res[0][j])
		{
			write(1, &res[0][j], 1);
			j++;	
		}		
	}
	write(1, "\n" ,1);
}




