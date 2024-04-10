/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:56:02 by asideris          #+#    #+#             */
/*   Updated: 2024/04/10 16:32:30 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = (size_t)ft_strlen((char *)needle);
	i = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (i < len)
	{
		j = 0;
		while (j < size)
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
	return (0);
}

/*#include<stdio.h>
#include<string.h>
int main()
{
    const char needle[] = "hello";
    const char haystack[] = "ohellkkkhellothere";

    
    printf("my ft : %s \n", ft_strnstr(haystack, needle, 20));
    printf("lib ft : %s \n", strnstr(haystack, needle, 20));
    return(0);
}*/