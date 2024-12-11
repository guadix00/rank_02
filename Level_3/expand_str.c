/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:58:58 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 18:54:57 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int space = 0;
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == 32 || argv[1][i] == '\t')
				space = 1;
			if (argv[1][i] != 32 && argv[1][i] != '\t')
			{
				if (space)
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		
		}
	
	}
	write(1, "\n" ,1);
}
