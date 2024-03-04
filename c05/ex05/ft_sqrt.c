/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:44:13 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 18:44:14 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 0;
	if (nb < 1)
		return (0);
	while (num * num <= nb && num <= 46340)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (2 == argc)
		printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
