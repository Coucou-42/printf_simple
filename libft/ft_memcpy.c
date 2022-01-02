/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:34:00 by nreveren          #+#    #+#             */
/*   Updated: 2021/11/01 11:57:13 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_char;
	char	*src_char;

	if (!dst && !src)
		return (dst);
	dst_char = (char *)dst;
	src_char = (char *)src;
	while (n--)
		*dst_char++ = *src_char++;
	return (dst);
}
