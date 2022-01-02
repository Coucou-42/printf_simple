/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:36:01 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/25 20:36:22 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}
