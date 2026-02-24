/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:20:10 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/14 12:01:15 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*new_str(const char *s, size_t start, size_t end);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr (set, s1[i]))
		i++;
	while (ft_strchr (set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i + 1));
}

// return (new_str(s1, i, j));
// static char	*new_str(const char *s, size_t start, size_t end)
// {
// 	char	*ptr;
// 	size_t	len;
// 	size_t	i;

// 	i = 0;
// 	len = end - start + 1;
// 	ptr = malloc (len + 1);
// 	if (!ptr)
// 		return (NULL);
// 	while (start <= end)
// 	{
// 		ptr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	ptr[len] = '\0';
// 	return (ptr);
// }
