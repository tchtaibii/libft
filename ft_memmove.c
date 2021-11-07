/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memmove.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 11:53:34 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/06 11:18:22 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;

	dst = (char *)s1;
	src = (char *)s2;
	i = 0;
	j = n - 1;
	if (dst > src)
	{
		while (i < j + 1)
		{
			dst[j] = src[j];
			j--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (s1);
}
/*
int main()
{
	char s1[] = "Learningisfun";
	char s2[] = "Learningisfun";

	ft_memmove(s1 + 5, s1, 9);
	printf("  my %s \n",s1);
	memmove(s2 + 5, s2, 9);
	printf("ther %s \n",s2);
}
int main()
{
	char s[] = "abcdef";
	char d[] = "wxy";
	ft_memmove(d,s,2);
	printf("%s\n",d);
	memmove(d,s,2);
	printf("%s",d);
}

int main () {
   char dest[] = "old8pring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s\n", dest);
   memmove(dest, src, 1);
   printf("After memmove dest = %s\n", dest);

   return(0);
}*/