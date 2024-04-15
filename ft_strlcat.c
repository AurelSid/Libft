/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:34:00 by asideris          #+#    #+#             */
/*   Updated: 2024/04/15 17:39:37 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	size_dst = ft_strlen((char *)dst);
	i = size_dst;
	size_src = ft_strlen((char *)src);
	if (dstsize <= size_dst)
		return (dstsize + size_src);
	dstsize = dstsize - (size_dst + 1);
	while (i != (size_dst + dstsize))
		dst[i++] = *src++;
	dst[i] = '\0';
	return (size_dst + size_src);
}

/*#include <string.h>
int main()
{
	const char src[] = "Hello";
	char dest[10] = "sir";
	char dest2[10] = "sir";
	printf("%zu\n",ft_strlcat(dest, src, 10));
	printf("%s\n",dest);
	printf("%zu\n",(size_t)strlcat(dest2, src, 10));
	printf("%s\n",dest2);

	
}*/