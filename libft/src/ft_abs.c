/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 15:39:33 by apetit            #+#    #+#             */
/*   Updated: 2013/12/27 16:23:15 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int nb)
{
	if (nb > 0)
		return (nb);
	else
		return (-nb);
}