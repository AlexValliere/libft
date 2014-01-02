/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/01 22:41:09 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/02 00:47:48 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int main(void)
{
	char	*ptr;

	ptr = ft_strnew(1);
	ft_printf("Test d : %d\n", 42);
	ft_printf("Test i : %i\n", 42);
	ft_printf("Test c : %c\n", '%');
	ft_printf("Test s : %s\n", "42 tests");
	ft_printf("Test p : %p\n", ptr);
	ft_printf("Test o : %o\n", 90);
	ft_printf("Test x : %x\n", 15);
	ft_printf("Test X : %X\n", 15);
	ft_printf("Test u : %u\n", 123456789);
	return (0);
}
