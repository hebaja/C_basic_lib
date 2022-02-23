#include <unistd.h>

void ft_putchar(char c)
{
				write(1, &c, 1);
}

int ft_strlen(char *str)
{
				int size = 0;
				while (str[size] != '\0')
				{
						size++;
				}		
				return (size);
}

void ft_putstr(char *str)
{
				int i;
				int size = ft_strlen(str);
				i = 0;
				while (i < size)
				{
						ft_putchar(str[i]);
						i++;
				}
}

void ft_putnbr(int nb)
{
				if (nb == -2147483648)
				{
								ft_putchar('-');
								ft_putchar('2');
								nb = 147483648;
				}
				else if (nb < 0)
				{
								ft_putchar('-');
								nb *= -1;
				}
				if (nb >= 0 && nb < 10)
				{
								ft_putchar(nb + 48);
				}
				if (nb >= 10)
				{
								ft_putnbr(nb / 10);
								ft_putnbr(nb % 10);
				}			
}

