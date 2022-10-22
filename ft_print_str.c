/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:29:30 by jperez            #+#    #+#             */
/*   Updated: 2022/09/26 18:24:12 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_print_str(char *str, size_t len)
{
	if (!str)
	{
		write(1, "(null)", 6);
		len += 6;
	}
	else
	{
		write(1, str, ft_strlen(str));
		len += ft_strlen(str);
	}
	return (len);
}
