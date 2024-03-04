/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:35:21 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/26 15:35:46 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rectangle_print(int x, int y, int tmx, int tmy)
{
	if ((tmy == 0 || tmy == y -1) && tmx == 0)
	{
		ft_putchar('A');
	}
	else if ((tmy == 0 || tmy == y - 1) && tmx == x - 1)
	{
		ft_putchar('C');
	}
	else if (tmy == 0 || tmy == y - 1 || tmx == 0 || tmx == x - 1)
	{
		ft_putchar('B');
	}	
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	tmx;
	int	tmy;

	tmy = 0;
	while (tmy < y)
	{
		tmx = 0;
		while (tmx < x)
		{
			rectangle_print(x, y, tmx, tmy);
			tmx++;
		}
		ft_putchar('\n');
		tmy++;
	}
}
