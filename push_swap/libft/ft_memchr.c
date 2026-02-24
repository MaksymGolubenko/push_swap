/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:28:15 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/07 23:53:58 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sim;
	size_t			i;

	i = 0;
	sim = (unsigned char *)s;
	while (i < n)
	{
		if (sim[i] == (unsigned char )c)
			return (&sim[i]);
		i++;
	}
	return (0);
}
