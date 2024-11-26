#include "libftprintf.h"
#include <stdarg.h>
//#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>


void	ft_which_format(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		ft_print_pointer(va_arg(args, size_t));
	else if (c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_print_hexa(va_arg(args, unsigned int), 'x');
	else if (c == 'X')
		ft_print_hexa(va_arg(args, unsigned int), 'X');
	else if(c == '%')
		write(1, "%%", 1);
}

int	ft_printf(const char* str, ...)
{
	va_list	args;
	int	i;
	int rtr;
	
	rtr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			ft_which_format(str[i + 1], args);
		i++;
	}
}

int main()
{
	char str[] = "ferhatalakus";
	ft_printf("%s", str);
	return 0;
}