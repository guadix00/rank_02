/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:33:12 by gualvare          #+#    #+#             */
/*   Updated: 2024/12/12 13:53:07 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	
	t_list *tmp;
	t_list *next;

	while (*begin_list != NULL && begin_list->next != NULL)
	{
		tmp = begin_list;
		next = begin_list->next;
		if ((*cmp)(begin_list->data, data_ref) == 0)
		{
			tmp = begin_list->next;
			tmp->next = next;
			free(begin_list);
		}
		else
			begin_list = begin_list->next;
	}

}

