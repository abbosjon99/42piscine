/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:35:54 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/08 20:36:01 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	n;

	if (nb == 2)
		return (1);
	else if (nb < 2 || !(nb % 2))
		return (0);
	else if (nb == 2147483647)
		return (1);
	n = 2;
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (nb == 2147483647)
		return (2147483647);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(int argc, char **argv)
{
	if (2 == argc)
		printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}*/
