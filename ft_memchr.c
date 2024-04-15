/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:44:37 by asideris          #+#    #+#             */
/*   Updated: 2024/04/14 16:59:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	int *result = (int *)ft_memchr(tab, -1, 7);
	if (result != NULL)
		printf("%d\n", *result);
	return (0);
}*/
