/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:19:30 by asideris          #+#    #+#             */
/*   Updated: 2024/04/16 17:21:53 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_skipwhite(const char *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\r' 
			|| s[i] == '\n' || s[i] == '\v' || s[i] == '\f')
	{
		i++;
	}
	return (i);
}
int numbereturn(const char *str , int i)
{
	int result;

	result = 0;
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return(result);
}


int	ft_atoi(const char *str)
{
	int	i;
	int		result;
	int		symbol;

	i = ft_skipwhite(str);
	symbol = 1;
	result = 0;
	if(str[i] != '-' && str[i] != '+' && !ft_isdigit(str[i]))
		return(0);
	if(str[i] == '-' && ft_isdigit(str[i+1]))
	{
		symbol = -1;
		i++;
		return (numbereturn(str, i) * symbol);
	}
	if(str[i] == '+' && ft_isdigit(str[i+1]))
	{
		i++;
		return (numbereturn(str, i) * symbol);
	}
	if(ft_isdigit(str[i]))
		return (numbereturn(str, i) * symbol);
	return(0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "054854Hello";
	printf("%d \n",ft_atoi(str));
	printf("%d \n",atoi(str));
}*/