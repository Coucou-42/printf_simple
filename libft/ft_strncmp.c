/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:52:28 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/25 20:52:33 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	uc_s1;
	unsigned char	uc_s2;

	while (n--)
	{
		uc_s1 = (unsigned char)*s1;
		uc_s2 = (unsigned char)*s2;
		if (uc_s1 > uc_s2)
			return (1);
		if (uc_s1 < uc_s2)
			return (-1);
		if (!(uc_s1))
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
