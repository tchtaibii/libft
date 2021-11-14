/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:43:35 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/11/14 21:42:03 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if ((size == 0 && !dst) || size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		return (src_len + size);
	while (src[i] && (i + dst_len) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (size > dst_len)
		return (src_len + dst_len);
	else
		return (src_len + size);
}
/*
int main()
{
	printf("%zu",ft_strlcat(0,"taha",0));
}*/