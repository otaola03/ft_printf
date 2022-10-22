/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:47:31 by jperez            #+#    #+#             */
/*   Updated: 2022/09/27 16:59:32 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>

# define L_HEXBASE "0123456789abcdef"
# define U_HEXBASE "0123456789ABCDEF"

void	ft_putchar(char c);
int		ft_strlen(char *str);
size_t	ft_print_char(char c, size_t len);
size_t	ft_print_num(long n, char c, size_t *len);
size_t	ft_print_str(char *str, size_t len);
size_t	ft_print_hex(unsigned long n, char c, size_t *len);
int		ft_printf(char const *format, ...);

#endif
