/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:54:43 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/14 18:16:21 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	count;

	result = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		j = i;
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			result[count] = ft_substr(s, j, i - j);
			count++;
		}
		else
			i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char	**string;
// 	int		i;

// 	i = 0;
// 	string = ft_split("hello////world////meeee///e", '/');
// 	if (!string)
// 	{
// 		printf("ERRRRRORriki");
// 		return (1);
// 	}
// 	while (string[i])
// 	{
// 		printf("result[%d] = %s \n", i, string[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (string[i])
// 	{
// 		free(string[i]);
// 		i++;
// 	}
// 	free(string);
// 	return (0);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**result;
// 	size_t	word_count;
// 	size_t	i;
// 	size_t	j;
// 	size_t	count;

// 	word_count = count_words(s, c);
// 	result = ft_calloc(word_count + 1, sizeof(char *));
// 	i = 0;
// 	count = 0;
// 	if (!result)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		j = i;
// 		if (s[i] != c)
// 		{
// 			while (s[i] && s[i] != c)
// 			{
// 				i++;
// 			}
// 			result[count] = ft_substr(s, j, i - j);
// 			count++;
// 		}
// 		else
// 			i++;
// 	}
// 	result[word_count] = NULL;
// 	return (result);
// }
