/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magolube <magolube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:08:07 by magolube          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:20 by magolube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*init_stack(int argc, char **argv)
{
	int		i;
	int		error;
	int		num;
	t_node	*stack;
	t_node	*new_node;

	i = 1;
	stack = NULL;
	while (i < argc)
	{
		error = 0;
		if (!is_number(argv[i]))
			return (NULL);
		num = ft_atoi_safe(argv[i], &error);
		if (error)
			return (NULL);
		new_node = create_node(num);
		if (!new_node)
			return (NULL);
		add_back(&stack, new_node);
		i++;
	}
	return (stack);
}

int	is_number(char *str)
{
	int	i;

	if (!str || !str[0])
		return (0);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_safe(const char *str, int *error)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
		if ((result * sign) > INT_MAX || (result * sign) < INT_MIN)
		{
			*error = 1;
			return (0);
		}
	}
	return ((int)(result * sign));
}
