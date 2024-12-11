/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:07:49 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 17:27:24 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*char change_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	else if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}*/
void capitalizer(char *str)
{
	int i = 0;
	while (str[i] && str[i + 1] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		   str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && str[i + 1] == 32 || str[i + 1] == '\t')
			str[i] = str[i] - 32;	
		write(1, &str[i], 1);
		i++;	
	}
	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (i < argc)
	{
		capitalizer(argv[i]);
		i = i + 1;
		write(1, "\n", 1);
	}

}
