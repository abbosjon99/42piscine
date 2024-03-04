/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:33:07 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/29 14:33:09 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_it(char c)
{
	write(1, &c, 1);
}

void	hexprt(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c / 16 > 0)
	{
		print_it(hex[c / 16]);
		print_it(hex[c % 16]);
	}
	else
	{
		print_it('0');
		print_it(hex[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print_it('\\');
			hexprt(str[i]);
		}
		else
		{
			print_it(str[i]);
		}
		i++;
	}
}
/*
int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    
    ft_putstr_non_printable(str);

}*/
