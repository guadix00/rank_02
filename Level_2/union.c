/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:10:30 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 20:18:53 by gualvare         ###   ########.fr       */
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
			if (!lookup[argv[1][i]])
			{
				lookup[argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;		
		}
		while (argv[2][j])
		{
			if (!lookup[argv[2][j]])
			{
				lookup[argv[2][j]] = 1;
				write(1, &argv[2][j], 1);		
			}
			j++;
		
		}
	
	}
	write(1, "\n", 1);

}
