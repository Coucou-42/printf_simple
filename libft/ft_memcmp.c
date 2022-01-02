/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:33:27 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/25 20:33:29 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;
	int				diff;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	diff = 0;
	while (n--)
	{
		diff = *(uc_s1++) - *(uc_s2++);
		if (diff)
			return (diff);
	}
	return (diff);
}
