/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:30:41 by nreveren          #+#    #+#             */
/*   Updated: 2022/01/02 18:37:58 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(long int num)
{
	char	digit;
	int		sign;
	int		c;

	sign = 0;
	c = 0;
	if (num < 0)
	{
		sign = write(1, "-", 1);
		num = num * -1;
	}
	if (num >= 10)
		c += ft_putdec(num / 10);
	digit = num % 10 + '0';
	c += write(1, &digit, 1);
	return (c + sign);
}

int	ft_putnbr_hex(unsigned long long num, char spec)
{
	char	digit;
	int		c;

	c = 0;
	if (num >= 16)
		c += ft_putnbr_hex(num / 16, spec);
	if ((num % 16) < 10)
		digit = num % 16 + '0';
	else
		digit = (spec + (num % 16) - 33);
	c += write(1, &digit, 1);
	return (c);
}
