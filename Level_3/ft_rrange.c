/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:57:42 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 19:14:34 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len = abs(end - start) + 1;
	int *tab = malloc(sizeof(int) * len);
	int i = 0;
	while (i < len)
	{
		if (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
		else
		{
			while (end <= start)
			{
				tab[i] = end;
				end++;
				i++;
			}
		}
	}
	return (tab);
}
#include <stdio.h>
int main()
{
	int i = 0;
	int start = -1;
	int end = 2;
	int len = abs(end - start);
	int *result = ft_rrange(start, end);
	while (i <= len)
	{
		printf("%d\n", result[i]);
		i++;
	}

}

