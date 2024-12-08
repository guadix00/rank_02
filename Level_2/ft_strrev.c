/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:42:41 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 18:45:34 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int end = 0;
	int start = 0;
	char tmp;

	while (str[end])
		end++;
	end--;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;	
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char str[] = "Hello";
	printf("%s\n", ft_strrev(str));

}
