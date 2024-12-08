/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:19:03 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 20:30:07 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		while(argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;		
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i])
				write(1, &argv[1][i++], 1);
		}	
	}
	write(1, "\n", 1);
}
