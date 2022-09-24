/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:51:21 by meourea           #+#    #+#             */
/*   Updated: 2021/05/10 17:51:25 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, const char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	length_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char	**ft_free(char **split, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		free(split[n]);
		n++;
	}
	free(split);
	return (0);
}

static char	**ft_copy(char **split, char const **s, char c, int i)
{
	int	n;

	n = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[n] && (*s)[n] != c)
	{
		split[i][n] = (*s)[n];
		n++;
	}
	split[i][n] = '\0';
	(*s) += n;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;
	int		i;
	int		sizew;

	if (!s)
		return (0);
	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	i = 0;
	while (i < words)
	{
		sizew = length_words(s, c);
		split[i] = (char *)malloc(sizeof(char) * (sizew + 1));
		if (!split[i])
			return (ft_free(split, i));
		split = ft_copy(split, &s, c, i);
		i++;
	}
	split[i] = 0;
	return (split);
}
