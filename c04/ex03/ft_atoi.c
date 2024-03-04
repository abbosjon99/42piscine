/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:08:47 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 17:08:51 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	ispos;
	int	val;

	ispos = 1;
	val = 0;
	while (*str == 32 || (8 < *str && *str < 14))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			ispos *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + *str - '0';
		str++;
		if (val == 214748364 && ispos == -1 && *str == '8')
			return (-2147483648);
	}
	return (val * ispos);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	return (0);
}*/
