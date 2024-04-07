/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Asideris <Asideris@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:07:09 by Asideris          #+#    #+#             */
/*   Updated: 2024/04/06 14:13:15 by Asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int nb)
{
	if (nb >= '1' && nb <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(int argc,char **argv)
{
        printf("argc : %d result;%d",argc,(ft_isdigit(argv[1][0])));
}*/
