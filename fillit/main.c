#include "fillit.h"

int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
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
	if (ret == 1)
		ft_putstr("error\n");
	else 
		ft_putstr("OK\n");
	//placeholder(tetr);
return (0);
}