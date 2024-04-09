/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:34:00 by asideris          #+#    #+#             */
/*   Updated: 2024/04/09 18:53:22 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	size_dst = ft_strlen(dst);
	i = size_dst;
	size_src = ft_strlen(src);
	if (size <= size_dst)
		return (size + size_src);
	size = size - (size_dst + 1);
	while (i != (size_dst + size))
		dst[i++] = *src++;
	dst[i] = '\0';
	return (size_dst + size_src);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char src[] = "Hello";
	char dest[12];
	char dest2[12];
	
	printf("%zu\n",ft_strlcat(dest, src, 3));
	printf("%s\n",dest);
	printf("%zu\n",strlcat(dest2, src, 3));
	printf("%s\n",dest2);
}*/