/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:23:56 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/13 23:02:50 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*put_in_str(int j, int i, long nb)
{
	char	*str;

	if (nb < 0)
		str = malloc(sizeof (char) * (i + 2));
	else
		str = malloc(sizeof (char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (j > 0)
	{
		if (nb < 0)
		{
			str[0] = '-';
			i = 1;
			nb *= -1;
		}
		str[i] = ((nb / j) + 48);
		nb -= ((nb / j) * j);
		j /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		j;
	int		i;
	long	tmp;
	long	nb;

	i = 1;
	j = 1;
	nb = n;
	tmp = nb;
	if (tmp < 0)
		tmp *= -1;
	while (tmp > 9)
	{
		tmp = tmp / 10;
		j *= 10;
		i++;
	}
	return (put_in_str(j, i, nb));
}

/*
int main()
{
	int i = 1337;
	printf("%s",ft_itoa(i));
}*/