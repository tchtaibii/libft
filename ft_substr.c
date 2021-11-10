/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_substr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/04 10:57:45 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/04 14:19:45 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t i;
    size_t j;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        len = 0;
    i = 0;
    while (i < len && s[i])
		i++;
    new = malloc(i + 1);
	if (!new)
		return (NULL);
    j = 0;
	while (j < i)
		new[j++] = s[start++];
    new[i] = '\0';
	return (new);
}
/*
int main()
{
	char const str [] = "ABCDEFGH";
	char *new;
	new = ft_substr(str,1,5);
	printf("%s",new);
}*/