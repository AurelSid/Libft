/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:43:04 by asideris          #+#    #+#             */
/*   Updated: 2024/04/11 18:09:10 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;
	int		setcount;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	j = 0;
	setcount = 0;
	while (s1[i])
	{
		if (ft_isset(s1[i], set) == 1)
		{
			setcount++;
		}
		i++;
	}
	dest = malloc(sizeof(char) * (len - setcount));
	i = 0;
	while (dest[i])
	{
		if (ft_isset(s1[i], set) == 0)
		{
			dest[j] = s1[i];
			j++;
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include<stdio.h>
int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "hellotheresir";
	set = "oil";
	printf("%s",ft_strtrim(s1, set));
	return(0);
}