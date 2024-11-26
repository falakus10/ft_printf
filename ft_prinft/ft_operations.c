//#include "libftprintf.h"
//#include "libft.h"
#include <stddef.h>
#include <unistd.h>

void	ft_putstr(char* str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	nb;
	char character;

	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	/*else
	{
		character = nb + '0';
		write(1, character, 2);
	}*/
}

void	ft_print_hexa(unsigned int n, char x)
{
	char	*base_character;
	char	str[9];
	int i;

	i = 0;
	if (x == 'x')
		base_character = "0123456789abcdef";
	else
		base_character = "0123456789ABCDEF";
	while(n != 0)
	{
		str[i] = base_character[x % 16];
		x = x / 16;
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
}

void	ft_print_pointer(size_t ptr)
{
	char 	*base_character;
	char	str[17];
	int	i;

	i = 0;
	base_character = "0123456789abcdef";
	while (ptr != 0)
	{
		str[i] = base_character[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
}