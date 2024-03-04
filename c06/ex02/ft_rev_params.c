/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:09:31 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 15:09:34 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	argc--;
	while (0 < argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		ft_putchar(10);
		argc--;
	}
	return (0);
}
