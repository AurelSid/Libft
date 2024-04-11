/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:43:33 by asideris          #+#    #+#             */
/*   Updated: 2024/04/11 17:03:06 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		sizes1;
	int		sizes2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	sizes1 = ft_strlen(s1);
	sizes2 = ft_strlen(s2);
	s = malloc(sizeof(char) * (sizes1 + sizes2 + 1));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[j + i] = s2[j];
		j++;
	}
	s[j + i] = '\0';
	return (s);
}

/*#include<stdio.h>
int	main()
{
	char	*s1;
	char	*s2;
	
	s1 = "Hello";
	s2 = "Theresir";
	printf("%s",ft_strjoin(s1,s2));
}*/