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
	unsigned int i_start;

	i_start = start - 1;
	i = 0;
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i_start + i];
		i++;
	}
	new[i] = '\0';
	return (new); 
}
/*
int main()
{
	char const str [] = "abcdesgujk";
	char *new;
	new = ft_substr(str,8,2);
	printf("%s",new);
}*/