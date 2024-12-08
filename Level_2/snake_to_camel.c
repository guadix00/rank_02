/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:05:43 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 20:08:44 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] = argv[1][i] - 32;
			}
			write(1, &argv[1][i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);

}

