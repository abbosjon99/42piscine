/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:53:55 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 13:53:56 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = -1;
	len = ft_strlen(to_find);
	if (!to_find[0])
		return (str);
	while ((i++ || 1) && str[i])
	{
		j = -1;
		while ((j++ || 1) && j < len)
		{
			if (str[i + j] == to_find[j])
			{
				if (len - 1 == j)
					return (&str[i]);
			}
			else
				break ;
		}
	}
	return (NULL);
}
/*
int main() {
    char *haystack = "Hello, world How are you?";
    char *needle = "orld";

    // Using strstr to find the first occurrence of the substring
    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("Substring found at position: %s\n", result);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}*/
