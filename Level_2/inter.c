/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:56:16 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 19:00:06 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		unsigned char lookup[256] = {0};
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !lookup[argv[2][j]])
				{
					lookup[argv[2][j]] = 1;
					write(1, &argv[2][j], 1);			
				}
				j++;			
			}
			i++;
		
		}
	
	}
	write(1, "\n", 1);

}
