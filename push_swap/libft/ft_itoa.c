/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:50:40 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/11/14 17:54:26 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int a)
{
	int	len;

	len = 1;
	if (a < 0)
		len++;
	while (a / 10 != 0)
	{
		len++;
		a /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;

	nb = n;
	len = num_len(nb);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	result[len] = '\0';
	while (nb >= 10)
	{
		result[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len --;
	}
	result[len - 1] = nb + '0';
	return (result);
}

// static int	len_size(char *a)
// {
// 	int	i;
// 	int	len;

// 	i = 0;
// 	len = 0;
// 	while (a[i])
// 	{
// 		if (ft_isdigit(a[i]))
// 			len++;
// 		i++;
// 	}
// 	return (len);
// }