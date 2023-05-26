int ft_get_number(char c, int str_base)
{
	int max;

	if (str_base <= 10)
		max = str_base + '0';
	else
		max = str_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return -1;
}

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0, number = 0, res = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while((number = ft_get_number(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (number * sign);
		i++;
	}
	return (res);
}
#include <stdio.h>
int main ()
{
	int i = ft_atoi_base("-235fc", 0123);

	printf("%i\n", i);
	return (0);
}