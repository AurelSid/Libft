/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:19:39 by asideris          #+#    #+#             */
/*   Updated: 2024/04/16 13:23:37 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++	;
	}
}