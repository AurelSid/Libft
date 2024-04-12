/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:38 by asideris          #+#    #+#             */
/*   Updated: 2024/04/12 14:58:46 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	s2 = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char s[] = "hello";

	printf("%s \n",ft_strdup(s));
	printf("%s \n",strdup(s));
	printf("%d \n",strdup(s)[5]);
	
	return(0);
}*/