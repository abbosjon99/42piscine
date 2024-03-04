/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:57:51 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/23 16:30:33 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_me(char digit)
{
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{	
		nb = -nb;
		print_me('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	print_me(nb % 10 + '0');
}
