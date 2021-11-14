/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:59:06 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/14 21:47:42 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void	ft_add_index(unsigned int index, char *str)
{
	//void(index);
	printf("%c",*str - 32);
	//printf("%c[%d]",*str - 32,index + 1);
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
int main()
{
	char s50[]= "taha";
	ft_striteri(s50, ft_add_index);	
}*/