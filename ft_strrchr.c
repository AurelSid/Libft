/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:35:10 by asideris          #+#    #+#             */
/*   Updated: 2024/04/10 13:02:09 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
    size_t i;

    i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s) + 1]);
	while (i > 0) {
        if (s[i - 1] == (char)c) {
            return ((char *)&s[i - 1]);
        }
        i--;
    }
    // Check the first character separately
    if (s[i] == (char)c) {
        return ((char *)&s[i]);
    }
    return (0);
}
/*#include<stdio.h>
int main()
{
	const char s[] = "ZZZaCCCCaBBaB";
	int c = 'a';
	printf("%s",ft_strrchr(s,c));
	return(0);
}*/