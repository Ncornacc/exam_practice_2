
#include <unistd.h>

void ft_epur_str(char *str)
{
	int i = 0;
	int flag = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		while (str[i] != ' ' || str[i] != '\t')
		{
			if (flag)
				write (1, " ", 1);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{

	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_epur_str(argv[1]);
	return (0);
}