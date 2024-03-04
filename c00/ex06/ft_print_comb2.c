/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:34:39 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/23 15:50:10 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_things(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			if (!(num1 == 0 && num2 == 1))
			{
				print_things(44);
				print_things(32);
			}
			print_things(num1 / 10 + '0');
			print_things(num1 % 10 + '0');
			print_things(32);
			print_things(num2 / 10 + '0');
			print_things(num2 % 10 + '0');
			num2++;
		}
		num1++;
	}
}
