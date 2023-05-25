/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bigest_pal.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 15:25:17 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/04/21 15:25:18 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putpal(char *str, int low, int high)
{
	int i = low;

	while(i <= high)
		ft_putchar(str[i++]);

}

void	ft_biggest_pal(char *str)
{
	int size_string = strlen(str);
	int	start_str	= 0;
	int	max_len		= 1;
	int counter		= -1;
	int	high, low;
	int palindrome_size;

	while(counter++ < size_string)
	{
		low = counter - 1;
		high = counter + 1;
		while (high < size_string && str[high] == str[counter])
			high++;
		while (low >= 0 && str[low] == str[counter])
			low--;
		while (low >= 0 && high < size_string && str[high] == str[low])
			{
				low--;
				high++;
			}
		palindrome_size = high - low - 1;
		if (max_len < palindrome_size)
		{
			max_len = palindrome_size;
			start_str = low + 1;
		}
	}
	if (max_len == palindrome_size)
		start_str = low;
	ft_putpal(str, start_str, start_str + max_len - 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		ft_biggest_pal(argv[1]);
	return (0);
}