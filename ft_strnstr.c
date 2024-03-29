/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strnstr.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 13:13:40 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/04 11:27:27 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *) str1;
	s2 = (char *) str2;
	i = 0;
	if (!s1)
		return (NULL);
	if (!s2)
		return (s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && s1 [i + j] == s2[j] && i + j < len)
		{
			if (s2[j + 1])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *p = NULL;
// 	char x[] = "hahaha";
// 	printf("%s",strnstr("","",0));
// }