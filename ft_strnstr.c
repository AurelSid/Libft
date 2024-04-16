/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:56:02 by asideris          #+#    #+#             */
/*   Updated: 2024/04/16 14:56:57 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	if(needle[0] == '\0')
		return((char *)haystack);
	size = ft_strlen(needle);
	i = 0;
	while (i <=len)
	{
		j = 0;
		while (j < size && (j + i) < len )
		{
			if (*((char *)haystack + j + i) == *((char *)needle + j))
			{
				if (j == size - 1)
					return ((char *)haystack + i);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (NULL);
}

/*#include<stdio.h>
#include<string.h>
int main()
{
    const char needle[] = "9";
    const char haystack[] = "123456789";

    
    printf("my ft : %s \n", ft_strnstr(haystack, needle, 20));
    printf("lib ft : %s \n", strnstr(haystack, needle, 20));
    return(0);
}*/