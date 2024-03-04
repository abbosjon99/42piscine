/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:39:14 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 17:39:17 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	val;

	val = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		val = nb * ft_recursive_power(nb, power - 1);
	}
	return (val);
}
/*
int	main(int argc, char **argv)
{
	if (3 == argc)
		printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
