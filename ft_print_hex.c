/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:03:35 by jperez            #+#    #+#             */
/*   Updated: 2022/09/26 18:33:15 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_print_hex(unsigned long n, char c, size_t *len)
{
	if (n > 15)
		ft_print_hex(n / 16, c, len);
	if (c == 'x' || c == 'p')
	{
		ft_putchar(L_HEXBASE[n - ((n / 16) * 16)]);
		(*len)++;
	}
	if (c == 'X')
	{
		ft_putchar(U_HEXBASE[n -((n / 16) * 16)]);
		(*len)++;
	}
	return (*len);
}
