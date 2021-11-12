/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strrchr.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 12:25:23 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/06 11:31:00 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	if (c == 0)
		return (new + ft_strlen(new));
	i = ft_strlen(new);
	while (i >= 0)
	{
		if (new[i] == (char)c)
			return (&new[i]);
		i--;
	}
	return (0);
}
