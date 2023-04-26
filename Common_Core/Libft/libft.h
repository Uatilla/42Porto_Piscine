/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:07:18 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/18 15:07:21 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

    //ft_bzero(): Writes zeroes to a byte string.
	void	ft_bzero(void *s, size_t n);

    //*ft_memcpy(): Copies n bytes of data from a memory area (the data CAN'T overleap).
    void	*ft_memcpy(void *dest, const void *src, size_t n);

    //*ft_memset(): Writes a byte to a byte string.
    void	*ft_memset(void *s, int c, size_t n);

    //*ft_memmove(): Copies n bytes of data from a memory area (the data CAN overleap).
    void	*ft_memmove(void *dest, const void *src, size_t n);

    //*ft_calloc(): Alocate some memory of size bytes and sets as 0.
    void    *ft_calloc(size_t nmemb, size_t size);

    //*ft_strdup(): Make some memory with malloc() and duplicates a string to there.
    void	*ft_strdup(const char *s);

    //*ft_memchr(): Returns the position in the memory that the first occurrence of a character happened.
    void	*ft_memchr(const void *s, int c, size_t n);

    //*ft_striteri(): Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.
    void	ft_striteri(char *s, void (*f)(unsigned int, char *));

    //ft_putchar_fd(): Outputs the character c to the given file descriptor.
    void    ft_putchar_fd(char c, int fd);

    //ft_isalnum(): Alphanumeric character test.
    int ft_isalnum(int c);

    //ft_isalpha(): Alphabetic character test.
    int	ft_isalpha(int c);

    //ft_isascii(): Ascii character test.
    int	ft_isascii(int c);

    //ft_isdigit(): Decimal digit character test.
    int	ft_isdigit(int c);

    //ft_isprint(): Printing character test (space character inclusive).
    int	ft_isprint(int c);
    
	//ft_toupper(): Changes one character to uppercase if it's lowercase else returns the character without changes.
    int	ft_toupper(int c);

    //ft_tolower(): Changes one character to lowercase if it's uppercase else returns the character without changes.
    int	ft_tolower(int c);

    //ft_atoi(): Converts the initial portion of the string in int.
    int ft_atoi(const char *nptr);

    //ft_strncmp(): Compares two strings and returns the difference between the first different character.
    int	ft_strncmp(const char *s1, const char *s2, size_t n);

    //ft_memcmp(): Compares two memory areas and returns the difference between the first different character.
    int	ft_memcmp(const void *s1, const void *s2, size_t n);
    
    //ft_strlen(): Measure the size of a string without the NULL character ('\0').
    size_t	ft_strlen(const char *s);

    //ft_strlcpy(): Copy a string src to a dest and guarantee the null terminator, return the size of src.
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);

    //ft_strlcat(): Concatenate a string src to a dest and guarantee the null terminator, return the size of src + dest.
    size_t	ft_strlcat(char *dst, const char *src, size_t size);

    //*ft_strchr(): Returns the position in the memory that the first occurrence of a character happened."
    char    *ft_strchr(const char *s, int c);

    //*ft_strrchr(): Returns the position in the memory that the last occurrence of a character happened."
    char    *ft_strrchr(const char *s, int c);

    //*ft_strnstr(): Returns the position of the first occurrence of a string, if it didn't find it returns NULL, if the little string isn't find it returns the big string. 
    char	*ft_strnstr(const char *big, const char *little, size_t len);
    
    //*ft_substr(): Returns a pointer to a substring that has size len. 
    char    *ft_substr(char const *s, unsigned int start, size_t len);

    //*ft_strjoin(): Concatenate two strings and returns a pointer to the new bigger string.
    char    *ft_strjoin(char const *s1, char const *s2);

    //*ft_strtrim(): Returns a pointer to a new string that has the characters of the set removed from the beginning and the end of the string.
    char    *ft_strtrim(char const *s1, char const *set);

    //**ft_split(): Returns a pointer to an array of strings that are obtained by splitting the string s using the character c as a delimiter.
    char **ft_split(char const *s, char c);

    //*ft_itoa(): Returns a pointer to a new string that represents the integer received as an argument.
    char    *ft_itoa(int n);

    //*ft_strmapi(): Applies the function f to each character of the string s to create a new string resulting from successive applications of f.
    char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));

#endif
