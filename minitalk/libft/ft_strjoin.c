/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:16:38 by meourea           #+#    #+#             */
/*   Updated: 2021/05/08 15:16:41 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, s1len + s2len + 1);
	ft_strlcat(str, s2, s1len + s2len + 1);
	return (str);
}
