/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:35:07 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/30 11:27:11 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive_put_digit(int number, int sign, int fd)
{
	char	c;

	if (number / 10)
		recursive_put_digit((number / 10), sign, fd);
	c = ((number % 10) * sign) + 48;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		sign = -1;
		write(fd, "-", 1);
	}
	recursive_put_digit(n, sign, fd);
}
