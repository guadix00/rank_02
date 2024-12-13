/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:29:22 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/12 13:33:03 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data); 
		begin_list = begin_list->next;
	}
}
