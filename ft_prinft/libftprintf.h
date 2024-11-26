#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>


void	ft_putstr(char* str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_print_hexa(unsigned int n, char x);
void	ft_print_pointer(size_t ptr);

#endif