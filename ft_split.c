/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_split.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/04 17:23:07 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/04 17:24:24 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlenn(char const *str, char sep)
{
    size_t i;

    i = 0;
    while(str[i] != sep)
        i++;
    return (i);
}
char **ft_split(char const *s, char c)
{
	size_t i;
    size_t ii;
    size_t j;
    size_t count;
	char **new;

    count = 0;
    i = 0;
    ii = 0;
    while (s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }
    i = 0;
    *new = malloc(count * (ft_strlen(s) + 1));
    while (count > i)
    {
        new[i] = malloc (ft_strlenn())
    }
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            new[j][ii] = '\0';
            j++;
            ii = 0;
        }
        new[j][ii] = s[ii];
        i++;
        ii++;
    }
    new[j][ii] = '\0';
    return (new);
}

int main()
{
    char s[] = "abcd+efgh+ijkl";
    char **new = ft_split(s,'+');
    size_t i;

    i = 0;
    while (new[i])
    {
        prsize_tf("%s",new[i]);
        i++;
    }
}