#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include "libft.h"

int	ft_isalpha(char c);
int	ft_isdigit(int c);
int	ft_isalnum(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
int	ft_strlen(char *str);
// memset
// bzero
// memcpy
// memmove
// strlcpy
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int ft_toupper(int c);
int ft_tolower(int c);
// strchr
// strrchr
// strncmp
// memchr
// memcmp
// strnstr
int	ft_atoi(const char *str);


#endif