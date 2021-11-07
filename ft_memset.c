/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memset.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/02 15:48:01 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 13:51:51 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	new = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		new[i] = c;
		i++;
	}
	return (new);
}
