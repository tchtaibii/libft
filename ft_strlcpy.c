/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strlcpy.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/02 15:08:26 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 19:45:41 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s2);
	if (n == 0)
		return (l);
	while (s2[i] && i < n - 1)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (l);
}
