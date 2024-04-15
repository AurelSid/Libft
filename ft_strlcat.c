/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:34:00 by asideris          #+#    #+#             */
/*   Updated: 2024/04/14 17:12:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	size_dst = ft_strlen((char *)dst);
	i = size_dst;
	size_src = ft_strlen((char *)src);
	if (size <= size_dst)
		return (size + size_src);
	size = size - (size_dst + 1);
	while (i != (size_dst + size))
		dst[i++] = *src++;
	dst[i] = '\0';
	printf("%s",dst ); 
	return (size_dst + size_src);
}

#include <string.h>
int main()
{
	const char src[] = "Hello";
	char dest[10] = "sir";
	char dest2[10] = "sir";
	printf("%zu\n",ft_strlcat(dest, src, 10));
	printf("%s\n",dest);
	printf("%zu\n",(size_t)strlcat(dest2, src, 10));
	printf("%s\n",dest2);
	ft_strlcat("pqrstuvwxyz", "abcd", 20);
	
}