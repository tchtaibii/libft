/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   libft.h											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 10:15:29 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2021/11/05 19:56:55 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *s1, const char *s2, size_t n);
size_t  ft_strlcat(char *s1, const char *s2, size_t n);
char *ft_strdup(const char *str);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
char *ft_strnstr (const char *str1, const char *str2, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
char **ft_split(char const *s, char c);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *s1, const void *s2, size_t n);
void *ft_memmove(void *s1, const void *s2, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
void *ft_calloc(size_t size, size_t n);
void ft_bzero(void *str, size_t n);

#endif