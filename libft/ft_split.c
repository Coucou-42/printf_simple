/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreveren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:05:56 by nreveren          #+#    #+#             */
/*   Updated: 2021/10/31 16:06:00 by nreveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **tab, size_t c_words)
{
	size_t	i;

	i = 0;
	while (i < c_words)
		free(tab[i++]);
	free(tab);
	return ((void *)0);
}

static char	*ft_get_word(const char *s, char c)
{
	size_t	len;
	char	*word;
	char	*keep_word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(*s) * (len + 1));
	if (!(word))
		return ((void *)0);
	keep_word = word;
	while (*s && *s != c)
		*(word++) = *(s++);
	*word = 0;
	return (keep_word);
}

static char	**ft_fill_tab(char **tab, const char *s, char c)
{
	size_t	c_words;

	c_words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			tab[c_words] = ft_get_word(s, c);
			if (!(tab[c_words]))
				return (ft_free(tab, c_words));
			c_words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (tab);
}

static char	**ft_count_words(char const *s, char c, size_t *n_words)
{
	size_t	i;
	char	**tab;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab = malloc(sizeof(*tab) * (i + 1));
	*n_words = i;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**tab;

	if (!s)
		return ((void *)0);
	n_words = 0;
	tab = ft_count_words(s, c, &n_words);
	if (!(tab))
		return ((void *)0);
	tab[n_words] = ((void *)0);
	return (ft_fill_tab(tab, s, c));
}
