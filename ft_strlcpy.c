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
size_t  ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	l;
	char *src;

	src = (char*)s2;
	i = 0;
	l = ft_strlen(src);
	if (n == 0)
		return (l);
	while (src[i] && i < n - 1)
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (l);
}
/*
int main () {
   const char src[40] = "This is tutorialspoint.com";
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   
   ft_strlcpy(dest, src, 26);
   printf("my Final copied string : %s\n", dest);
   printf("%zu\n",ft_strlcpy(dest, src, 22));
   
 memset(dest, '\0', sizeof(dest));

   strlcpy(dest, src, 26);
   printf("their Final copied string : %s\n", dest);
   printf("%zu\n",strlcpy(dest, src, 22));
   
   return(0);
}
int main()
{
	 char s[] = "222222";
	 char d[] = "1111";
	 
	 size_t l = 4;
	 strlcpy(d,s,l);
	 
	 printf("%zu\n%s",ft_strlcpy(d,s,l),d);
}

int main()
{
	char src1[] = "coucou";
	char dest1[10];
	memset(dest1, 'A', 10);
	printf("%zu\n",ft_strlcpy(dest1, src1, 0) );
	printf("%s\n", dest1);
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);
	printf("%zu\n",strlcpy(dest, src, 0) );
	printf("%s\n", dest);
}*/