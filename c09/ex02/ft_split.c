/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:29:59 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/14 17:30:01 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!(new))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	ft_wordcounter(char *str, char *strbuff, int func)
{
	int	i;
	int	counter;

	i = -1;
	counter = 0;
	if (func)
	{
		while (str[++i])
		{
			if (strbuff[i] && strbuff[i + 1] == '\0')
				counter++;
		}
	}
	else
	{
		while (str[++i])
		{
			counter++;
		}
	}
	return (counter);
}

char	*ft_rmcharset(char *str, char *charset)
{
	int		i;
	int		j;
	char	*strbuff;

	strbuff = ft_strdup(str);
	if (!(strbuff))
		return (NULL);
	i = -1;
	while (strbuff[++i])
	{
		j = -1;
		while (charset[++j])
		{
			if (strbuff[i] == charset[j])
			{
				strbuff[i] = '\0';
				break ;
			}
		}
	}
	return (strbuff);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	*strbuff;
	char	**result;

	strbuff = ft_rmcharset(str, charset);
	if (!(strbuff))
		return (NULL);
	i = ft_wordcounter(str, strbuff, 1);
	result = (char **)malloc((i + 1) * sizeof(char *));
	result[i] = NULL;
	k = 0;
	j = -1;
	while (str[++j] && k < i)
	{
		if (j != 0)
			j += ft_wordcounter(result[k - 1], "temp", 0);
		while (strbuff[j] == '\0' && str[j])
			j++;
		result[k++] = ft_strdup(&strbuff[j]);
	}
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int		i;
	char	**arr;

	i = 0;
	if (argc == 3)
	{
		arr = ft_split(argv[1], argv[2]);
		while (arr[i] != 0)
			printf("%s\n", arr[i++]);
	}
	return (0);
}*/
