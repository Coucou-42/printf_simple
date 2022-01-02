/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:43:06 by nreveren          #+#    #+#             */
/*   Updated: 2022/01/02 18:34:27 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *fmt, ...);
int	ft_read_fmt(va_list args, const char *fmt);
int	ft_placeholder(va_list args, char spec);
int	ft_print_c(va_list args);
int	ft_print_s(va_list args);
int	ft_print_dec(va_list args, char spec);
int	ft_print_hex(va_list args, char spec);
int	ft_print_p(va_list	args);
int	ft_putdec(long int num);
int	ft_putnbr_hex(unsigned long long num, char spec);

#endif
