/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:15:04 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/26 18:15:07 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buffer;
		i++;
	}
}
/*
int	main()
{
	int	test[] = {1, 2, 3, 4, 5, 6, 7};
	int	length;
	int	i;
	
	length = 7;
	i = 0;
	ft_rev_int_tab(test, length);
	while (i < length)
	{
		printf("\n %d", test[i]);
		i++;
	}
	return	(0);
}*/
