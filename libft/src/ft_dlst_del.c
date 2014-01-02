/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 23:19:50 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/03 00:38:58 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

void	ft_dlst_del(t_dlist **dlist)
{
	t_node	*temp;
	t_node	*del;

	if (*dlist != NULL)
	{
		temp = (*dlist)->head;
		while (temp != NULL)
		{
			del = temp;
			temp = temp->next;
			free(del);
		}
		free(*dlist);
		*dlist = NULL;
	}
}
