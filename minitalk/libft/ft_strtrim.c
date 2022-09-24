/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:46:42 by meourea           #+#    #+#             */
/*   Updated: 2021/05/08 16:46:45 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left;
	size_t	right;
	char	*str;
	size_t	i;

	if (!s1 || !set)
		return (0);
	left = 0;
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	right = ft_strlen(s1);
	while (right > left && ft_strchr(set, s1[right - 1]))
		right--;
	str = (char *)malloc((sizeof(*s1)) * (right - left + 1));
	if (!str)
		return (0);
	i = 0;
	while (left < right)
		str[i++] = s1[left++];
	str[i] = '\0';
	return (str);
}
