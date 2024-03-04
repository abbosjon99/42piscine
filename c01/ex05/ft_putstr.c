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

void	ft_putstr(char *str)
{
	int	strlen;

	strlen = 0;
	while (! (str[strlen] == '\0'))
	{
		write(1, &str[strlen], 1);
		strlen++;
	}
}
/*
int main()
{
	char str[] = "Hello";
	ft_putstr(str);

}*/
