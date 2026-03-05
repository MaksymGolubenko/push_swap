/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magolube <magolube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:08:07 by magolube          #+#    #+#             */
/*   Updated: 2026/03/05 18:35:44 by magolube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*init_stack(int argc, char **argv)
{
	int		i;
	t_node	*stack;
	t_node	*new_node;

	i = 1;
	stack = NULL;
	while (i < argc)
	{
		new_node = create_node(ft_atoi(argv[i]));
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
