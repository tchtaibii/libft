/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memset.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/02 15:48:01 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 13:51:51 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
 size_t i;
 unsigned char *new;

 new = (unsigned char *)str;
 
 i = 0;
 while(new[i] && i < n)
 {
  new[i] = c;
  i++;
 }
 return (new);
}
/*
int main () {
   char str[] = "This is string.h library function";
   puts(str);

   memset(str,'5',51);
   puts(str);
   
   return(0);
}
int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("After ft_memset():  %s\n", str);
	memset(str + 13, '.', 8*sizeof(char));

	printf("After memset()   :  %s", str);
	return 0;
}
*/