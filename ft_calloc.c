/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:50:32 by asideris          #+#    #+#             */
/*   Updated: 2024/04/11 15:27:49 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	long unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	i = malloc(count * size);
	if (!i)
	{
		return (NULL);
	}
	ft_bzero(i, count * size);
	return (i);
}
