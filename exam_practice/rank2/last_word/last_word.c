#include <unistd.h>

void    ft_last_word(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        if(str[i] == ' ' && str[i + 1] >= '!' && str[i + 1] <= '~')
            j = i + 1;
        i++;
    }
    while (str[j] >= '!' && str[j] <= '~')
    {
        write(1, &str[j], 1);
        j++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        ft_last_word(argv[1]);
    return 0;
}