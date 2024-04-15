/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:51 by asideris          #+#    #+#             */
/*   Updated: 2024/04/10 13:38:25 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	if (dest == src)
		return (dest);

	if (dest > src)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}

	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{

	char dest[] = "conseipsum dolor sit a";
	char dest2[] = "conseipsum dolor sit a";
	ft_memmove(dest + 3, dest + 4, 2);
	printf("%s \n", dest);
	memmove(dest2 + 4, dest2 + 3, 2);
	printf("%s \n", dest);
}*/