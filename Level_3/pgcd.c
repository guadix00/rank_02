/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:36:36 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 19:41:17 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int nb1 = atoi(argv[1]);
		int nb2 = atoi(argv[2]);
		if (nb1 > 0 && nb2 > 0)
		{
			while (nb1 != nb2)
			{
				if (nb1 > nb2)
					nb1 = nb1 - nb2;
				else
					nb2 = nb2 - nb1;
			}
			printf("%d", nb1);
		
		}

	
	}
	printf("\n");
}
