/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 00:22:45 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/03 00:43:29 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

size_t	ft_dlst_len(t_dlist *dlist)
{
	size_t	lenght;

	lenght = 0;
	if (dlist != NULL)
		lenght = dlist->lenght;
	return (lenght);
}
