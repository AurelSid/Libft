/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:38:08 by asideris          #+#    #+#             */
/*   Updated: 2024/04/11 16:40:34 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	j;
	char			*s2;

	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
	{
		return (NULL);
	}
	i = 0;
	j = start;
	while (i < len)
	{
		s2[i] = s[j + i];
		i ++;
	}
	s2[i] = '\0';
	return (s2);
}

/*#include <stdio.h>


int main()
{
	char const *s;
	s = "hellotheresir";
	printf("%s",ft_substr(s, 5 , 5));	
}*/