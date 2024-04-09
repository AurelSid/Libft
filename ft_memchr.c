/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:44:37 by asideris          #+#    #+#             */
/*   Updated: 2024/04/09 21:15:59 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t  i;

	i = 0;
	while(i < n)
	{
		if(*((unsigned char *)s + i) == c)
		{
			return((void *)s + i);
		}	
		i++;
	}
	return(0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char s[] = "hello";
	int c = 'l';
	printf("%s \n",ft_memchr(s,c,6));
	printf("%s \n",memchr(s,c,6));
	return(0);
}*/