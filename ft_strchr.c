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
char *ft_strchr(const char *str, int c)
{
	
	int i;
	char *new;

	new = (char *) str;
        if (c == 0)
        return(new + ft_strlen(new));
	i = 0;
	while(new[i])
	{
		if (new[i] == c)
		return (&new[i]);
		i++;
	}
	return (0);
}/*
int main () {
   int len;
   const char str[] = "http://www.tchtaibi.com";
   char ch = 0;
   char *ret;

   //ret = ft_strrchr(str, ch);

   //printf("String after |%c| is - |%s|\n", ch, ret);
   
   ret = ft_strchr(str, ch);
	printf("%s",ret);
   //printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/