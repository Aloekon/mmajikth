#include "Libft.h"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_memalloc.c"
#include "ft_memdel.c"
#include "ft_strnew.c"
#include "ft_strdel.c"
#include "ft_strclr.c"
#include "ft_striter.c"
#include "ft_striteri.c"
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_putendl.c"
#include "ft_putnbr.c"
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"
#include "ft_putendl_fd.c"
#include "ft_putnbr_fd.c"

int	main(int argc, char **argv)
{
	void	*p;
	char	s;
	//ft_putstr_fd(argv[1], 1);
	//ft_putstr_fd(argv[2], 1);

	ft_putendl_fd(argv[1], 1);
	ft_putendl_fd(argv[2], 1);

	//ft_putnbr(-2147483648);

	s = ' ';
	if (ft_isascii(s))
		ft_putstr("Success!\n");
	return (0);
}
