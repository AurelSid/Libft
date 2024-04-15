/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <asideris@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:40:33 by asideris          #+#    #+#             */
/*   Updated: 2024/04/15 20:32:52 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    long      nb;
    long        decimal;
    char    *str;
    long        i;

    
    nb = n;
    i = 0;
    decimal = n;
    if(n < 0)
              decimal = decimal * -1;
    while(decimal >= 10)
    {
            decimal = decimal/10;
            i++;
    }
    if(nb < 0)
    {
        str = malloc(sizeof(char) * (i + 3));
        str[0] = '-';
        nb = nb * -1;
        i++;
    }
    else
    {
        str = malloc(sizeof(char) * (i + 2));
    }
    str[i+1] = '\0';
    if(n < 0 )
    {
      while( i > 0)
      {
        
        str[i] = nb%10 + '0';
        nb = nb / 10;    
        i--;
        decimal = decimal / 10;
      }
    }
    else
    {
      while( i >= 0)
      {
          
          str[i] = nb%10 + '0';
          nb = nb / 10;    
          i--;
          decimal = decimal / 10;
      }
    }
    return(str);
}

/*int main()
{
    printf("%s",ft_itoa(1123));
    return(0);
}*/