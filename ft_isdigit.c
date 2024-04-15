/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:07:09 by Asideris          #+#    #+#             */
/*   Updated: 2024/04/10 17:26:06 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(int argc,char **argv)
{
		printf("argc : %d result;%d",argc,(ft_isdigit(argv[1][0])));
}*/
