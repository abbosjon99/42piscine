/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:38:15 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/25 20:47:33 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
/*
int	main()
{
	int	a;
	int	b;
	
	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div is %d \n", a);
	printf("mod is %d", b);
	return (0);
}*/
