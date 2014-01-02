/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 22:44:43 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/03 00:42:59 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

static void	*ft_dlst_cp_new_data(t_node **new, void *data, size_t data_size)
{
	data = malloc(data_size);
	data = ft_memcpy((*new)->data, data, ft_strlen(data) + 1);
	return (data);
}

static void	ft_dlst_create_data(t_dlist **dlist, t_node **temp,
										void *data, size_t data_size)
{
	t_node	*new;

	new = malloc(sizeof(new));
	if (new != NULL)
	{
		new->data = ft_dlst_cp_new_data(&new, data, data_size);
		(*temp)->next->prev = new;
		(*temp)->prev->next = new;
		new->prev = (*temp)->prev;
		new->next = (*temp);
		(*dlist)->lenght++;
	}
}

t_dlist		*ft_dlst_insert(t_dlist *dlist, void *data, int data_size,
								int pos)
{
	t_node	*temp;
	int		i;

	i = 1;
	if (dlist != NULL)
	{
		temp = dlist->head;
		while (temp != NULL && i < pos)
		{
			if (i == pos)
			{
				if (temp->next == NULL)
					dlist = ft_dlst_append(dlist, data, data_size);
				else if (temp->prev == NULL)
					dlist = ft_dlst_prepend(dlist, data, data_size);
				else
					ft_dlst_create_data(&dlist, &temp, data, data_size);
			}
			else
				temp = temp->next;
			++i;
		}
	}
	return (dlist);
}
