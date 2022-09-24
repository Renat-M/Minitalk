/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:41:45 by meourea           #+#    #+#             */
/*   Updated: 2021/05/14 13:25:23 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (*haystack != '\0')
	{
		if (i + nlen > len)
			return (0);
		if (!ft_strncmp(haystack, needle, nlen))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
