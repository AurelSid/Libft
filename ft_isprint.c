/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:03:12 by Asideris          #+#    #+#             */
/*   Updated: 2024/04/09 20:12:23 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_isprint('a'));
	printf("%d",ft_isprint('	'));
	printf("%d",ft_isprint('3'));
	printf("%d",ft_isprint('}'));
}*/
