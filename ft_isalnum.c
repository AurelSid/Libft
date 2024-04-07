/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Asideris <Asideris@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:24:11 by Asideris          #+#    #+#             */
/*   Updated: 2024/04/06 15:49:17 by Asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int nb)
{
	if (nb >= '1' && nb <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
/*
int main(int argc, char **argv)
{
	printf("argc:%d result:%d \n",argc,ft_isalnum(argv[1][0]));
}*/