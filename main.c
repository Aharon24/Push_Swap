/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:14:46 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/19 18:13:23 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_s	*ft_return_empty(t_s *p, char **arr)
{
	if (arr)
		ft_free(arr);
	if (p)
		ft_list_free(p);
	return (NULL);
}

int	main(int argc, char *argv[])
{
	t_arr	set;
	t_s		n;
	t_s		*n1;

	set.arr = NULL;
	if (argc == 1)
		return (0);
	if (ft_check_argv(set.arr, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		ft_free(set.arr);
		return (0);
	}
	n1 = ft_get_number(argc, argv, set.arr, &n);
	if ((n1 == NULL) || ft_check_dublicate(n1) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		ft_free(set.arr);
		if (n1)
			ft_list_free(n1);
		return (0);
	}
	ft_push_swap(&n1);
	ft_list_free(n1);
	return (0);
}
