/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:19:30 by asideris          #+#    #+#             */
/*   Updated: 2024/04/11 15:33:05 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
int	ft_atoi(const char *str)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	if (ft_isdigit(str[0]))
	{
		while (ft_isdigit(str[i]))
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return (result);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "3323Hello";
	printf("%d \n",ft_atoi(str));
	printf("%d \n",atoi(str));
}*/