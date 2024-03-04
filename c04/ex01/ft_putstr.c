/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:12:54 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 15:12:56 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str[0])
	{
		write(1, &str[0], 1);
		str++;
	}
}
/*
int	main() {
    char needle[] = "a potentially long string";
    ft_putstr(needle);
    return 0;
}*/
