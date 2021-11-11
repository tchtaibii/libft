/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:23:56 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/10 23:48:10 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char c;
    int i;
    int tmp;
    int j;
    int k;
    char *str;
    int count;

    j = 1;
    count = 1;
    i = 0;
    k = 0;
    if (n < 0)
    {
        n *= -1;
        k = 1;
        i++;
    }
    tmp = n;
    while (tmp > 9)
    {
        tmp = tmp / 10;
        j *= 10;
        count++;
    }
    str = malloc(sizeof(char) * count + 1);
    if (str == NULL)
        return (NULL);
    while (j > 0)
    {
        c = (n / j) + 48;
        str[i] = c;
        n -= ((c - 48) * j);
        j /= 10;
        i++;
    }
    return(str);
}