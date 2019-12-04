#include "fillit.h"

int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		size;
	int		*a;
	int		ret;
	int 	len;
	int 	k;
	char	*tetr;
	char 	**field;

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
		ft_putchar(',');
		i++;
	}
	free(a);
	ft_putchar('\n');
	size =  ft_minsqrt(len * 4);
	field = gen_field(size);
	k = 1;
	//while (k)
	//{
	//	i = 0;
	//	k = solve(field, len, i, a);
	//	if (k)
	//	{
	//		free(field);
	//		size++;
	//		field = gen_field(size);
	//	}	
	//}
	print_field(field);
	return (0);
}