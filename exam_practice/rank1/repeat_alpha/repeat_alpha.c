#include <unistd.h>

void    ft_repeat_alpha(char *string)
{
    int  i = 0;
    int num;
    
    while(string[i])
    {
        if (string[i] >= 65 && string[i] <= 90)
            num = string[i] - 'A';
        else if (string[i] >= 97 && string[i] <= 122)
            num = string[i] - 'a';
        else
            num = 0;
        while (num >= 0)
        {
            write(1, &string[i], 1);
            num--;
        }
        i++;
    }
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    
    if (argc != 2)
        write (1, "\n", 1);
    else
        ft_repeat_alpha(argv[1]);
    return (0);
}