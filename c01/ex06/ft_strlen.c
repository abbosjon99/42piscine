/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:00:34 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/25 23:11:11 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (! (str[strlen] == '\0'))
	{
		strlen++;
	}
	return (strlen);
}
/*
int main()
{
	int	strlen;
	
	char str[] = "Helloaf";
	strlen = ft_strlen(str);
	printf("%d", strlen);
}*/
