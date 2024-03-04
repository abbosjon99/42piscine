/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:54:27 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 16:58:40 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

void	print_me(char digit)
{
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
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
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putnbr(atoi(argv[1]));
	}
	return (0);
}*/
