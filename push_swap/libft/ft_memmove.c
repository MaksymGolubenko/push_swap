/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:02:29 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/14 18:56:26 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*additional_memmove(unsigned char *d, unsigned char *s, size_t len)
{
	size_t	i;

	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (!len || (unsigned char *)dest == (unsigned char *)src)
		return (dest);
	return (additional_memmove((unsigned char *)dest,
			(unsigned char *)src, len));
}

// void	*ft_memmove(void *dest, const void *src, size_t len)
// {
// 	unsigned char	*d;
// 	unsigned char	*s;
// 	size_t			i;

// 	if (!dest && !src)
// 		return (NULL);
// 	d = (unsigned char *)dest;
// 	s = (unsigned char *)src;
// 	if (d < s)
// 	{
// 		i = 0;
// 		while (i < len)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	}
// 	else
// 		while (len--)
// 			d[len] = s[len];
// 	return (dest);
// }

// void	*ft_memmove(void *dest, const void *src, size_t len)
// {
// 	unsigned char	*d;
// 	unsigned char	*s;
// 	size_t			i;

// 	if (!dest && !src)
// 		return (NULL);
// 	d = (unsigned char *)dest;
// 	s = (unsigned char *)src;
// 	if (d < s)
// 	{
// 		i = 0;
// 		while (len > i)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while (len > 0)
// 		{
// 			len--;
// 			d[len] = s[len];
// 		}
// 	}
// 	return (dest);
// }
