/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 20:22:58 by alex              #+#    #+#             */
/*   Updated: 2014/02/07 20:26:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	power(int nbr, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nbr;
	if (power == 0)
		return (1);
	while (i < power)
	{
		res = res * nbr;
		++i;
	}
	return (res);
}