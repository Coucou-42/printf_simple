/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:42:32 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/31 10:26:53 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (dstsize--)
	{
		if ((dstsize) && (*s))
			*(d++) = *(s++);
		else
		{
			*d = 0;
			break ;
		}
	}
	return (ft_strlen(src));
}
