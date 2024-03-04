/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:53:46 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 17:53:49 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	val;

	if (0 > index)
		return (-1);
	else if (0 == index)
		return (0);
	else if (1 == index)
		return (1);
	else
		val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (val);
}
/*
int	main(int argc, char **argv)
{
	if (2 == argc)
		printf("%d\n", ft_fibonacci(atoi(argv[1])));
	return (0);
}*/
