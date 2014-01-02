/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 15:37:46 by apetit            #+#    #+#             */
/*   Updated: 2014/01/02 00:09:43 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_base(unsigned int nb, char *base)
{
	unsigned int	start;
	unsigned int	end;

	end = nb % ft_strlen(base);
	start = (nb - end) / ft_strlen(base);
	if (start)
		ft_putnbr_base(start, base);
	ft_putchar(base[end]);
}
