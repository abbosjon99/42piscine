/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:51:57 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/29 14:51:59 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = str[i];
		if (t < 65 || (t > 90 && t < 97) || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
    char str[] = "Salom0";
    int result;
    
    result = ft_str_is_alpha(str);
    
    printf("%d", result);
}*/
