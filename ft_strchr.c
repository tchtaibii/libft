/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 12:06:29 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/06 11:29:52 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*new;

	new = (char *)str;
	if (c == 0)
		return (new + ft_strlen(new));
	i = 0;
	while (new[i])
	{
		if (new[i] == (unsigned char)c)
			return (&new[i]);
		i++;
	}
	return (0);
}
