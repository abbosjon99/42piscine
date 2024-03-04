/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:46:19 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 13:46:55 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (s1[i] || s2[i])
	{
		value = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (value);
		i++;
	}
	return (value);
}
/*
int	main(void)
{
	char  s1[] = "hello";
	char  s2[] = "hello,hj,hmghm";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
}*/
