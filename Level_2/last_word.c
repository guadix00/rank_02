/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:20:30 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 19:23:34 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i--;
		while (argv[1][i] && argv[1][i] != 32 && argv[1][i] != '\t')
			i--;
		i++;
		while (argv[1][i] && argv[1][i] != 32 && argv[1][i] != '\t')
			write(1, &argv[1][i++], 1);	
	}
	write(1, "\n", 1);

}
