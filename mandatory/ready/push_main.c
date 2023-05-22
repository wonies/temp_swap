/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:05:32 by wonhshin          #+#    #+#             */
/*   Updated: 2023/05/22 22:45:32 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void leaks()
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_info	info;
	char	**get;
	 atexit(leaks);
	a = NULL;
	b = NULL;
	get = NULL;
	if (ac < 2)
		print_error(-42);
	ft_memset(&info, 0, sizeof(t_info));
	get = parsing(&a, ac, av);
	if (!get)
		return (0);
	pushswap_start(&a, &b, &info);
	ft_lstclear(&a);
	ft_lstclear(&b);
}
