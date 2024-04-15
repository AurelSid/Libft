/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:24:26 by marvin            #+#    #+#             */
/*   Updated: 2024/04/13 22:25:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void ft_populate(char **array, char const *s, char c)
{
	int i;
	int prev;
	char *nextword;
	int j;

	i = 0;
	j = 0;
	prev = 0;
	while (s[i])
	{
		if (ft_isalnum(s[i]) && s[i - 1] == c)
		{
			nextword = ft_substr(s, prev, (i - 1) - prev);
			array[j] = malloc(sizeof(char) * ft_strlen(nextword));
			ft_memcpy(array[j], nextword, ft_strlen(nextword));
			prev = i;
			j++;
		}
		i++;
	}
}
int ft_tokencount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (ft_isalnum(s[i]) && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char **array;
	int wordcount;

	wordcount = ft_tokencount(s, c);
	if (s == NULL)
		return (0);
	array = malloc(sizeof(char *) * wordcount);
	ft_populate(array, s, c);
	return (array);
}

/*int	main(void)
{
	char	c;
	char	*str;
	int i;
	char **array;

	i = 0;
	c = ' ';
	str = "hello  there sir   how";
	array = ft_strsplit(str, c);

	while(array[i])
	{
		printf("%s \n", array[i]);
		i++;
	}



}*/