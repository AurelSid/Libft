/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:19:30 by asideris          #+#    #+#             */
/*   Updated: 2024/04/15 16:20:53 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		result;
	int		symbol;

	i = 0;
	symbol = 0;
	result = 0;
	if(str[0] == '-')
	{
		symbol = -1;
		i++;
	}
	if(str[0] == '+')
	{
		symbol = 1;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		while (ft_isdigit(str[i]))
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return (result * symbol);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "+3323Hello";
	printf("%d \n",ft_atoi(str));
	printf("%d \n",atoi(str));
}*/