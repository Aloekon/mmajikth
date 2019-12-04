#include "fillit.h"

int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		*a;
	int		ret;
	int 	len;
	char	*tetr;

	ret = 0;
	tetr = NULL;
	if (argc == 2)
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		ret = get_term(fd, &tetr);
		close(fd);
	}
	len = (ft_strlen(tetr) + 1) / 21;
	a = return_arr(tetr, len);
	if (ret == 1 || !a)
	{
		ft_putstr("error\n");
		return (0);
	}
	else 
		ft_putstr("OK\n");
	i = 0;
	while (i < len)
	{
		ft_putnbr(a[i]);
		i++;
	}
return (0);
}