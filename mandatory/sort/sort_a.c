/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:50:11 by wonhshin          #+#    #+#             */
/*   Updated: 2023/05/18 21:50:11 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../push_swap.h"

int	optimize(t_node **a, int size)
{
	int		front;
	int		mid;
	int		third;
	int		cnt;
	t_node	*temp;

	cnt = 0;
	front = 1;
	mid = size / 2;
	third = size / 3;
	temp = *a;
	while (temp)
	{
		if (mid <= front && temp->order <= third)
			cnt++;
		temp = temp->next;
		front++;
	}
	if (cnt >= (third / 4) * 3)
		return (114);
	else
		return (-114);
}

void	put_sort(t_node **a, t_node **b, int size, int chunk)
{
	int		i;
	int		opti;

	i = 0;
	opti = optimize(a, size);
	while (i < size)
	{
		if ((*a)->order > chunk + i)
		{
			if (opti == 114)
				rra(a, 1);
			else
				ra(a, 1);
		}
		else
		{
			if ((*a)->order < i++)
				pb(a, b, 1);
			else
			{
				pb(a, b, 1);
				rb(b, 1);
			}
		}
	}
}
