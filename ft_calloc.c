/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_calloc.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/07 13:30:23 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/07 13:32:40 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	i;

	i = count * size;
	a = malloc(i);
	if (a == 0)
		return (NULL);
	ft_bzero(a, i);
	return (a);
}
