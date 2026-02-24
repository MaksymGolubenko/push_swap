/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:29:35 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/11 22:19:41 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static char	*create_empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sfull;
	size_t	i;
	size_t	real_len;
	size_t	slen;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (create_empty_str());
	if (len < slen - start)
		real_len = len;
	else
		real_len = slen - start;
	sfull = malloc(real_len + 1);
	if (!sfull)
		return (NULL);
	while (i < real_len)
	{
		sfull[i] = s[start + i];
		i++;
	}
	sfull[i] = '\0';
	return (sfull);
}

// int	main(void)
// {
// 	char	*s;
// 	unsigned int	start;
// 	size_t	len;
// 	char	*result;

// 	s = "hello world!";
// 	start = 5;
// 	len = 3;
// 	result = ft_substr(s, start, len);
// 	printf("%s", result);
//	free();
// }
