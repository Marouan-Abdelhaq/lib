#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int  ft_isalnum(int c);
int  ft_isalpha(int c);
int  ft_isascii(int c);
int  ft_isdigit(int c);
int  ft_isprint(int c);
int  ft_tolower(int c);
int  ft_toupper(int c);
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int  ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);

int	ft_toupper(int c);
#endif