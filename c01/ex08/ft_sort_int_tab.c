/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:59:10 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/26 18:59:13 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	buffer;
	int	i;
	int	isswapped;

	isswapped = 1;
	while (isswapped > 0)
	{
		i = 0;
		isswapped = 0;
		while (i < size)
		{
			if ((tab[i] > tab[i + 1]) && (i != size - 1))
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
				isswapped++;
			}
			i++;
		}
	}
}
/*
int	main()
{
	int	test[] = {7, 1, 5, 8, 10, 15, -154};
	int	length;
	int	i;
	
	length = 7;
	i = 0;
	ft_sort_int_tab(test, length);
	while (i < length)
	{
		printf("\n %d", test[i]);
		i++;
	}
	return	(0);
}*/
