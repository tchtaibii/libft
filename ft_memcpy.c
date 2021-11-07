/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memccpy.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/02 17:12:22 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 21:19:27 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*destcpy;
	const char	*srccpy;

	destcpy = (char *)s1;
	srccpy = (const char *)s2;
    if (srccpy == destcpy)
        return ((char*)srccpy);
	i = 0;
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (s1);
}
