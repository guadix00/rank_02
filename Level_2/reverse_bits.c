/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:00:56 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/08 20:05:02 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 8;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		i--;	
	}
	return (result);
}
