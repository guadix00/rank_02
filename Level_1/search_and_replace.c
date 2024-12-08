/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:36:11 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/07 18:41:10 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		while (argv[1][i] && !argv[2][1] && !argv[3][1])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i++], 1);
			
		}
	
	}
	write(1, "\n", 1);

}
