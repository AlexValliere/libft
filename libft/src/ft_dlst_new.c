/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 02:07:59 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/02 02:12:14 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

t_dlist	*ft_dlst_new(void)
{
	t_dlist	*new;

	new = malloc(sizeof(new));
	if (new != NULL)
	{
		new->lenght = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}
