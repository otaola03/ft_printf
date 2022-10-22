/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:04:31 by jperez            #+#    #+#             */
/*   Updated: 2022/09/27 16:59:19 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_write(char c, va_list values, size_t len)
{
	if (c == 'c')
		len = ft_print_char(va_arg(values, int), len);
	else if (c == 'd' || c == 'i')
		ft_print_num(va_arg(values, int), c, &len);
	else if (c == 'u')
		ft_print_num(va_arg(values, unsigned int), c, &len);
	else if (c == 's')
		len = ft_print_str(va_arg(values, char *), len);
	else if (c == 'p')
	{
		len = ft_print_str("0x", len);
		ft_print_hex(va_arg(values, unsigned long), c, &len);
	}
	else if (c == 'x' || c == 'X')
		ft_print_hex(va_arg(values, unsigned int), c, &len);
	else if (c == '%')
		len = ft_print_char(c, len);
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	values;
	size_t	len;

	va_start(values, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
			len = ft_write(*(++format), values, len);
		else
			len = ft_print_char(*format, len);
		format++;
	}
	va_end(values);
	return (len);
}
