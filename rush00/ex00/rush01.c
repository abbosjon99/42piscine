/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:42:28 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/26 15:13:05 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	rectangle_print(int x, int y, int tmx, int tmy)
{
	if (tmx == 0 && tmy == 0)
	{
		ft_putchar('/');
	}
	else if (tmx == x - 1 && tmy == y - 1 && y != 1 && x != 1)
	{
		ft_putchar('/');
	}
	else if ((tmx == x - 1 && tmy == 0) || (tmx == 0 && tmy == y - 1))
	{
		ft_putchar('\\');
	}
	else if (tmy == 0 || tmy == y - 1 || tmx == 0 || tmx == x - 1)
	{
		ft_putchar('*');
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
