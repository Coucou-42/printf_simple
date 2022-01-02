/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:30:39 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/26 19:14:11 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_num(const char *str);
static const char	*ft_ignorespace(const char *str);
static const char	*ft_checksign(const char *str, int *ptr_ispos);

int	ft_atoi(const char *str)
{
	int	ispositive;

	ispositive = 1;
	str = ft_ignorespace(str);
	str = ft_checksign(str, &ispositive);
	if ((*str > 47) && (*str < 58))
	{
		if (ispositive)
			return (ft_num(str));
		else
			return (-ft_num(str));
	}
	return (0);
}

int	ft_num(const char *strr)
{
	int	len;
	int	num;
	int	pow;

	len = 0;
	pow = 1;
	num = 0;
	while ((*strr > 47) && (*strr < 58))
	{
		len++;
		strr++;
	}
	strr--;
	while (len > 0)
	{
		num = num + ((*strr - 48) * pow);
		strr--;
		pow *= 10;
		len--;
	}
	return (num);
}

const char	*ft_ignorespace(const char *str)
{
	while ((*str == 32) || (8 < *str && *str < 14))
		str++;
	return (str);
}

const char	*ft_checksign(const char *str, int *ptr_ispos)
{
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			*ptr_ispos = 0;
		str++;
	}
	return (str);
}
