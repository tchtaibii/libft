/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 12:51:30 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/04 14:14:47 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	new = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (new[i] == (unsigned char)c)
			return (&new[i]);
		i++;
	}
	return (NULL);
}
