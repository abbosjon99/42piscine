/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:14:31 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 16:14:33 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (0 == nb)
		return (1);
	else if (0 > nb)
		return (0);
	else
	{
		while (nb)
		{
			sum *= nb;
			nb--;
		}
	}
	return (sum);
}
/*
int	main(int argc, char **argv)
{
	if (2 == argc)
		printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
