/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strjoin.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/04 11:15:38 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/04 13:30:23 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int	 j;
	int		s1len;
	int		s2len;
	int	 len;
	char	*str;
	
	s1len = ft_strlen((char*) s1);
	s2len = ft_strlen((char*) s2);
	len = s1len + s2len;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < len)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	char s1[] = "tahaha";
	char s2 [] = "**";
	char *s3 = ft_strjoin(s1,s2);
	printf("%s",s3); 
}*/