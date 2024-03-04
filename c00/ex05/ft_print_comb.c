/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:03:12 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/23 14:29:44 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int a, int b, int c)
{
	while (b < '9')
	{
		while (c <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			if (a == '7' && b == '8' && c == '9')
			{
				break ;
			}
			write(1, ", ", 2);
			c++;
		}
		b++;
		c = b + 1;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '8')
	{
		ft_print_number(a, b, c);
		a++;
		b = a + 1;
		c = b + 1;
	}
}
