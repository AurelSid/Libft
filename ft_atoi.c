/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:19:30 by asideris          #+#    #+#             */
/*   Updated: 2024/04/10 18:25:51 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isdigit(int nb)
{
	if (nb >= '1' && nb <= '9')
		return (1);
	else
		return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	len;
	int		result;

	i = 0;
	result = 0;
	len = ft_strlen(str);
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

