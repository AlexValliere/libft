/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 02:12:52 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/02 02:53:35 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

static void	*ft_dlst_cp_new_data(void *data, size_t data_size)
{
	data = malloc(data_size);
	data = ft_memcpy(new->data, data, ft_strlen(data) + 1);
	return (data);
}

t_dlist		*ft_dlst_append(t_dlist *dlist, void *data, size_t data_size)
{
	struct s_node	new;

	if (dlist != NULL)
	{
		if ((new = malloc(sizeof(s_node))) != NULL)
		{
			new->data = ft_dlst_cp_new_data(data, data_size);
			new->data_size = data_size;
			new->next = NULL;
			if (dlist->tail == NULL)
			{
				new->prev = NULL;
				dlist->head = new;
				dlist->tail = new;
			}
			else
			{
				dlist->tail->next = new;
				new->prev = dlist->tail;
				dlist->tail = new;
			}
			dlist->lenght++;
		}
	}
	return (dlist);
}
