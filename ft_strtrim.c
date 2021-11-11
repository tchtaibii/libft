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

int	checkerset(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;

	if (!s1)
		return (NULL);
	s = (char *)s1;
	if (!set)
		return (s);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] && checkerset(s[i], set))
		i++;
	while (j > 0 && checkerset(s[j], set))
		j--;
	return (ft_substr(s, i, j - i + 1));
}

/*int main()
{
    char const s1[] = "";
    char const set[]  = "";
    char *new;
    new = ft_strtrim(s1,set);
    printf("%s",new); 
}*/