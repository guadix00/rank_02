/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:50:58 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 19:57:43 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	write(1, &str[i], 1);
	i = i + 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == 32 || str[i - 1] == '\t')
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;	
	}
}
int main(int argc, char **argv)
{
	int i = 1;
	if (argc < 2)
		write(1, "\n", 1);
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		i++;
		write(1, "\n", 1);
	}

}
