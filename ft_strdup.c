/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strdup.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/04 09:08:59 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 14:12:21 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*vstr;
	char	*dup;

	vstr = (char *)str;
	len = ft_strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (vstr[i] != '\0')
	{
		dup[i] = vstr[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s\n", result);
   result = 0;
 result = strdup(str);
   printf("The string : %s", result);
   return 0;
}*/