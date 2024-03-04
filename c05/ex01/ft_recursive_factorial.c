/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:14:18 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 17:14:20 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (0 == nb)
		return (1);
	else if (0 > nb)
		return (0);
	else
	{
		sum = nb * ft_recursive_factorial(nb - 1);
	}
	return (sum);
}
/*
int	main(int argc, char **argv)
{
	if (2 == argc)
		printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
