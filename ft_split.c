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

int    checker_str(char sep,char c)
{
    if (sep == c)
        return (1);
    return (0);
}

int ft_word_counter(char const *s,char sep)
{
    int i;
    int c;

    c = 0;
    i = 0;
    if (!checker_str(sep,s[0]))
        c = 1;
    while (s[i])
    {
        if (checker_str(sep,s[i]) && !checker_str(sep,s[i + 1]) && s[i + 1] != '\0')
            c++;
        i++;
    }
    return (c);
}

int ft_len_counter(char const *s, char sep)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while (checker_str(sep,s[i]) && s[i])
        i++;
    while (!checker_str(sep,s[i]) && s[i])
    {
        i++;
        c++;
    }
    return (c);
}
char **ft_put(char **new, char const *s, char sep)
{
    int    i;
    int    j;
    int    k;

    k = 0;
    i = 0;
    j = 0;
    while (s[i])
    {
        while (checker_str(sep, s[i])&& s[i])
            i++;
        k = 0;
        while (!checker_str(sep, s[i]) && s[i])
        {
            new[j][k] = s[i];
            k++;
            j++;
            i++;
        }
        while (checker_str(sep, s[i]) && s[i])
            i++;
        new[j][k] = '\0';
        i++;
        break;
    }
    new[j][k] = '\0';
    return (new);
}
char    **ft_split(char const *s, char sep)
{
    int        word;
    char    **new;
    int        i;

    new = (NULL);
    word = ft_word_counter(s, sep);
    new = malloc(sizeof(char *) * (word + 1));
    if (!new)
        return (0);
    i = 0;
    while (word > 0)
    {
        new[i] = malloc(ft_len_counter(s, sep) + 1);
        word--;
        i++;
    }
    new = ft_put(new, s, sep);
    return (new);
}

int    main(void)
{
    int i = 0;
	char p[] = "bonjour je m'appel Arthur";
	char **tab = ft_split(p, ' ');

    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return (0);
}