/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:24:37 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/11 19:32:31 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if (n % a == 0 && n % b == 0)
			return(n);
		++n;
	}

}

#include <stdio.h>

int main()
{
	printf("%d", lcm(13, 17));
}
