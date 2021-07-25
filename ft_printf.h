/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 22:43:31 by fcaquard          #+#    #+#             */
/*   Updated: 2021/07/25 14:33:35 by fcaquard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_char(va_list args, size_t **count);
void	ft_string(va_list args, size_t **count);
void	ft_decimal(va_list args, size_t **count);
void	ft_unsigned_decimal(va_list args, size_t **count);
void	ft_hexadecimal_number(va_list args, size_t **count, char format);
size_t	ft_strlen(const char *str);
int		ft_putchar(unsigned char c);
int		ft_putstr(char *s);
int		print_num(long long nb, int n);
int		to_hex_long(unsigned long long x, char *base, int n);
int		ft_printf(const char *format, ...);
#endif
