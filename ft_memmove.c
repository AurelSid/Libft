/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:51 by asideris          #+#    #+#             */
/*   Updated: 2024/04/09 16:20:09 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest > src)
	{
		while (len > 0)
		{
			*((unsigned char *)dest + len) = *((unsigned char *)src + len);
			len--;
		}
	}
	else
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	
	char dest[] = "AAACDBB";
	char dest2[] = "AAACDBB";
	ft_memmove(dest + 3,dest + 4,2);
	printf("%s \n",dest);
	memmove(dest2 + 3,dest2 + 4,2);
	printf("%s \n",dest);

}*/