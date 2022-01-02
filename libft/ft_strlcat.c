/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:37:17 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/26 22:16:37 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	size_t	nbr_of_chars_to_append;
	size_t	ret_val;
	size_t	dst_len;

	ret_val = ft_strlen(src);
	dst_len = ft_strlen(dst);
	d = (char *)dst + dst_len;
	if (dstsize >= (dst_len + 1))
	{
		nbr_of_chars_to_append = dstsize - dst_len - 1;
		ret_val += ft_strlen(dst);
		while (nbr_of_chars_to_append-- && *src)
		{
			*(d++) = *(src++);
		}
		*d = 0;
	}
	else
		ret_val += dstsize;
	return (ret_val);
}
