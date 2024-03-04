/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:58:37 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/25 15:59:06 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rectangle_print(int x, int y, int tempx, int tempy)
{
	if (tempy == 0 || tempy == y - 1)
	{
		if (tempx == 0 || tempx == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (tempx == 0 || tempx == x - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	tempx;
	int	tempy;

	tempy = 0;
	while (tempy < y)
	{
		tempx = 0;
		while (tempx < x)
		{
			rectangle_print(x, y, tempx, tempy);
			tempx++;
		}
		ft_putchar('\n');
		tempy++;
	}
}
