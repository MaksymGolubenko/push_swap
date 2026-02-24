/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:11:05 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/12/06 19:39:19 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_placeholder(va_list args, char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count += ft_puthex(va_arg(args, unsigned int), type);
	else if (type == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (type == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count += print_placeholder(args, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// static int	print_placeholder(va_list args, char type)
// {
// 	int	count;

// 	count = 0;
// 	if (type == 'c')
// 		count += ft_putchar(va_arg(args, int));
// 	else if (type == 's')
// 		count += ft_putstr(va_arg(args, char *));
// 	else if (type == 'd' || type == 'i')
// 		count += ft_putnbr(va_arg(args, int));
// 	else if (type == 'u')
// 		count += ft_putunsigned(va_arg(args, unsigned int));
// 	else if (type == 'x' || type == 'X')
// 		count += ft_puthex(va_arg(args, unsigned int), type);
// 	else if (type == 'p')
// 		count += ft_putptr(va_arg(args, void *));
// 	else if (type == '%')
// 		count += ft_putchar('%');
// 	return (count);
// }

// int	ft_printf(const char *str, ...)
// {
// 	va_list	args;
// 	int		i;
// 	int		count;

// 	va_start(args, str);
// 	i = 0;
// 	count = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '%' && str[i + 1] != '\0')
// 		{
// 			// вызываем плейсхолдер для следующего символа после '%'
// 			count += print_placeholder(args, str[i + 1]);
// 			i += 2; // сдвигаем индекс сразу на два символа: '%' и плейсхолдер
// 			continue; // пропускаем обычный i++ в конце
// 		}
// 		count += ft_putchar(str[i]);
// 		i++;
// 	}
// 	va_end(args);
// 	return (count);
// }

// static int	print_placeholder(va_list arg, int count, char c)
// {
// 	if (c == 'c')
// 		ft_putchar(va_arg(arg, int));
// 	if (c == 's')
// 		ft_putstr(va_arg(arg, char *));
// 	if (c == 'i' || c == 'd')
// 		ft_putnbr(va_arg(arg, int));
// 	if (c == 'u')
// 		ft_putunsigned(va_arg (arg, unsigned int));
// 	if (c == '%')
// 		ft_putchar('%');
// }

// int	ft_printf(const char *str, ...)
// {
// 	va_list	args;
// 	int		i;
// 	char	c;
// 	char	*s;
// 	int		n;
// 	unsigned int	u;

// 	c = va_arg(args, int);
// 	s = va_arg(args, char *);
// 	n = va_arg(args, int);
// 	u = va_arg(args, unsigned int);
// 	va_start(args, str);
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '%')
// 			print_placeholder(args, i, str[i + 1]);
// 		else
// 			ft_putchar(str[i]);
// 		i++;
// 	}
// }
