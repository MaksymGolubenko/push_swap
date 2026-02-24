/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:28:24 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/11 15:17:02 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc(s1len + s2len + 1);
	if (!str)
		return (NULL);
	ft_memcpy (str, s1, s1len);
	ft_memcpy (str + s1len, s2, s2len);
	str[s1len + s2len] = '\0';
	return (str);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*str;
// 	size_t	s1len;
// 	size_t	s2len;
// 	size_t	i;
// 	size_t	j;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	s1len = ft_strlen(s1);
// 	s2len = ft_strlen(s2);
// 	str = malloc(s1len + s2len + 1);
// 	if (!str)
// 		return (NULL);
// 	while (i < s1len)
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	while (j < s2len)
// 	{
// 		str[i + j] = s2[j];
// 		j++;
// 	}
// 	str[i + j] = '\0';
// 	return (str);
// }
