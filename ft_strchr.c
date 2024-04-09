/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Asideris <Asideris@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:03:33 by Asideris          #+#    #+#             */
/*   Updated: 2024/04/07 16:23:37 by Asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
	const char s[] = "hello";
	int c = 'l';
	printf("%s",ft_strchr(s,c));
	return(0);
}
*/
