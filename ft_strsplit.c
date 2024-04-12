/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:38 by asideris          #+#    #+#             */
/*   Updated: 2024/04/12 17:58:25 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int nb)
{
	if (nb >= '1' && nb <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
int	ft_tokencount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (ft_isalnum(s[i]) && s[i - 1] == c)
			count++;
		i++;
	}
	printf("number of tokens ; %d", count);
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int 	i;
	int		wordcount;
	int		j;

	j = 0;
	i = 0;
	wordcount = ft_tokencount(s, c);
	if (s == NULL)
		return (0);
	array = malloc(sizeof(char *) * wordcount);
	

	while (i < wordcount)
	{
		j = 0;
		while (ft_isalnum(s[i]) && s[i - 1] == c)
		{
			array[i][j] = s[i];
			j++;
		}
		i++;
	}
	return (array);
}

int	main(void)
{
	char	c;
	char	*str;
	int i;
	int j;
	char **array;

	j = 0;
	i = 0;
	c = ' ';
	str = " hello  there sir   how";
	array = ft_split(str, c);
	
	while(array[i])
	{
		printf("%s", array[i]);
		i++;
	}
}