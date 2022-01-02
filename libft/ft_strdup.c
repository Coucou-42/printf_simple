/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:36:41 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/29 23:32:20 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_str;
	char	*dup_str;
	char	*dup_s;

	len_str = ft_strlen(s1);
	dup_str = malloc(len_str + 1);
	if (dup_str)
	{
		dup_s = dup_str;
		while (*(s1))
			*(dup_s++) = *(s1++);
		*dup_s = '\0';
	}
	return (dup_str);
}
