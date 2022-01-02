/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:12:25 by nreveren          #+#    #+#             */
/*   Updated: 2022/01/02 18:37:25 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		c;

	va_start(args, fmt);
	c = ft_read_fmt(args, fmt);
	va_end(args);
	return (c);
}

int	ft_read_fmt(va_list args, const char *fmt)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			while (fmt[i] && !ft_strchr("cspdiuxX%", fmt[i]))
				i++;
			if (!fmt[i])
				break ;
			c += ft_placeholder(args, fmt[i]);
		}
		else
			c += write(1, &fmt[i], 1);
		i++;
	}
	return (c);
}

int	ft_placeholder(va_list args, char spec)
{
	int	c;

	if (spec == 'c')
		c = ft_print_c(args);
	else if (spec == 's')
		c = ft_print_s(args);
	else if (spec == 'd' || spec == 'i' || spec == 'u')
		c = ft_print_dec(args, spec);
	else if (spec == 'x' || spec == 'X')
		c = ft_print_hex(args, spec);
	else if (spec == 'p')
		c = ft_print_p(args);
	else
		c = write(1, &spec, 1);
	return (c);
}
