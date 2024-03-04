/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:51:33 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 13:51:35 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dlen;

	i = 0;
	dlen = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char  dest[4] = "HE ";
    char  src[] = "hfhi";
    
    //printf("%s\n", ft_strncat(dest, src, 2));
    printf("%s\n", strncat(dest, src, 3));
    printf("%s\n", dest);
}*/
