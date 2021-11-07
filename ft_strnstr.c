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
#include <string.h>
char *ft_strnstr (const char *str1, const char *str2, size_t len)
{
 size_t	i;
	size_t	j;
 char *s1;
 char *s2;

 s1 = (char *) str1;
 s2 = (char *) str2;
	i = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] != '\0' && s1 [i + j] == s2[j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main () {
   const char s1[20] = "TutorialsPoint";
   const char s2[10] = "Point";
   char *ret;

   ret = ft_strnstr(s1, s2,13);
   printf("The substring is: %s\n", ret);
   ret = strnstr(s1, s2,13);
   printf("The substring is: %s\n", ret);

   return(0);
}
int main()
{
	char* k = "this is our school";
	char* l = "is";
	printf("%s\n",ft_strnstr(k, l, 4));
	printf("%s", strnstr(k, l, 4));
	return(0);
}*/