/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:00:18 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/29 23:49:58 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	final_len;
	char	*substring;

	if (ft_strlen(s) >= start)
	{
		final_len = ft_strlen(s) - start;
		if (final_len > len)
			final_len = len;
	}
	else
		final_len = 0;
	substring = malloc(sizeof(*substring) * (final_len + 1));
	if (!(substring))
		return (substring);
	else
	{
		ft_strlcpy(substring, (s + start), final_len + 1);
		return (substring);
	}
}
