/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:28:20 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/29 23:54:49 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ending;
	size_t	start;
	size_t	i;
	char	*new_string;

	start = 0;
	ending = ft_strlen(s1);
	while ((start < ending) && (ft_strchr(set, (int)s1[start])))
		start++;
	while ((ending) && (start < (ending - 1)) \
			&& (ft_strchr(set, (int)s1[ending - 1])))
		ending--;
	new_string = ft_calloc((ending - start + 1), sizeof(*new_string));
	if (new_string)
	{
		i = 0;
		while (start < ending)
			new_string[i++] = s1[start++];
	}
	return (new_string);
}
