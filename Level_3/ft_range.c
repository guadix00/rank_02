/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:46:32 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 18:57:32 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = abs(end - start) + 1;
	int *tab = malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			tab[i] = start;
			start++;
			i++;
		}
		else
		{
			tab[i] = start;
			start--;
			i++;
		}
	
	}
	return (tab);		
}
#include <stdio.h>
int main()
{
	int i = 0;
	int start = 0;
	int end = 0;
	int len = abs(end - start);
	int *result = ft_range(start, end);
	while (i <= len)
	{
		printf("%d\n", result[i]);
		i++;
	}

}
