/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:37:00 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/27 19:54:55 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result_str;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result_str = ft_calloc((len1 + len2 + 1), sizeof(*result_str));
	if (result_str)
	{
		i = 0;
		while (i < len1)
		{
			result_str[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < len2)
		{
			result_str[len1 + i] = s2[i];
			i++;
		}
	}
	return (result_str);
}
