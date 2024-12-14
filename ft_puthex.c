#include "ft_printf.h"

void	ft_puthex(unsigned long nb, int cas, int *counter)
{
	char	*hex_base;

	if (cas == 1)
		hex_base = "0123456789ABCDEF";
	else
		hex_base = "0123456789abcdef";
	if (nb >= 16)
		ft_puthex(nb / 16, cas, counter);
	ft_putchar(hex_base[nb % 16], counter);
}
