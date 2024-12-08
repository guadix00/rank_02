/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 19:25:24 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 19:58:25 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int max;
	if (tab == 0)
		return (0);
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;	
	}
	return (max);
}
#include <stdio.h>
int main()
{
	int tab[] = {10, 2, 50, 4};
	unsigned int len = 4;
	printf("%d", max(tab, len));
}
