/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:54:12 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/31 10:43:03 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	needle_len;
	char	*hay;
	char	*needle;
	size_t	i;

	needle_len = ft_strlen(to_find);
	if (*to_find == 0)
		return ((char *)str);
	while ((*str) && n--)
	{
		hay = (char *)str;
		needle = (char *)to_find;
		i = 0;
		while ((*needle) && (*needle == *hay) && (i < (n + 1)))
		{
			needle++;
			hay++;
			i++;
		}
		if (i == needle_len)
			return ((char *)str);
		str++;
	}
	return ((void *)(0));
}
