/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Asideris <Asideris@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:52:17 by Asideris          #+#    #+#             */
/*   Updated: 2024/04/06 21:25:09 by Asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t size)
{
	long unsigned int	i;

	i = 0;
	while (i < size)
	{
		*((unsigned char *)dest + i) = (unsigned char)c;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
 * jaurais pu utiliser un nouveau pointeur unsigners char *buffer
 * et lassigner a des ce qui aurait caster direct les elemnt de dest en chat 
 * plutot que de cas dans la boucle, meme chose.
int main()
{
	char buffer[] = "AAAAA";
	printf("%s \n",buffer);
	ft_memset(buffer,'b',3);
	printf("%s \n",buffer);

}*/
