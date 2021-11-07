/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strtrim.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/04 13:45:15 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 10:01:51 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
int ft_checker(char c, const char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	char *new;
	
	i = 0;
	while (s1[i] && ft_checker(s1[i],set))
		i++;
	s1 += i;
	i = ft_strlen(s1) - 1;
	while (s1[i] && ft_checker(s1[i],set))
		i--;
	new = malloc(sizeof(char) * i + 1);
	j = 0;
	while (s1[j] && i >= 0)
	{
		new[j] = s1[j];
		j++;
		i--;		
	}
	new[j] = 0;
	return (new);
}
/*
int main()
{
	char const s1[] = "	aaaaatahaab ";
	char const set[] = " ";
	char *new;
	new = ft_strtrim(s1,set);
	printf("%s",new); 
}*/