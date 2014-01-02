/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_prepend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 02:32:59 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/03 00:30:43 by alexandre        ###   ########.fr       */
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

t_dlist		*ft_dlst_prepend(t_dlist *dlist, void *data, int data_size)
{
	t_node	*new;

	if (dlist != NULL)
	{
		if ((new = malloc(sizeof(t_node))) != NULL)
		{
			new->data = ft_dlst_cp_new_data(&new, data, data_size);
			new->data_size = data_size;
			new->prev = NULL;
			if (dlist->tail == NULL)
			{
				new->next = NULL;
				dlist->head = new;
				dlist->tail = new;
			}
			else
			{
				dlist->tail->prev = new;
				new->next = dlist->head;
				dlist->head = new;
			}
			dlist->lenght++;
		}
	}
	return (dlist);
}
