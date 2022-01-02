/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:58:16 by nreveren          #+#    #+#             */
/*   Updated: 2022/01/02 18:37:48 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(va_list	args)
{
	char	c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

int	ft_print_s(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_print_dec(va_list args, char spec)
{
	long int	num;

	if (spec == 'u')
		num = (unsigned int)va_arg(args, int);
	else
		num = va_arg(args, int);
	return (ft_putdec(num));
}

int	ft_print_hex(va_list args, char spec)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_putnbr_hex(num, spec));
}

int	ft_print_p(va_list	args)
{
	long int			ptr;
	unsigned long long	addr;

	ptr = (long int)va_arg(args, void *);
	addr = (unsigned long long)ptr;
	write(1, "0x", 2);
	return (ft_putnbr_hex(addr, 'x') + 2);
}
