/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:30:31 by jperez            #+#    #+#             */
/*   Updated: 2022/09/26 17:20:04 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_print_num(long n, char c, size_t *len)
{
	if (n < 0)
	{
		n = -n;
		if (c != 'u')
		{
			(*len)++;
			ft_putchar('-');
		}
	}
	if (n == -2147483648)
		write(1, "2147483648", 10);
	else if (n >= 10)
		ft_print_num(n / 10, c, len);
	(*len)++;
	ft_putchar(n % 10 + '0');
	return (*len);
}
