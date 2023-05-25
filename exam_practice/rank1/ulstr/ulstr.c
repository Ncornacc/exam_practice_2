#include <unistd.h>

void    ft_ulstr(char *string)
{
    int i = 0;
    
    while(string[i])
    {
        if (string[i] >= 97 && string[i] <= 122)
            string[i] -= 32;
        else if (string[i] >= 65 && string[i] <= 90)
            string[i] += 32;
        
        write (1, &string[i++], 1);
    }
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    
    if (argc != 2)
        write (1, "\n", 1);
    else
        ft_ulstr(argv[1]);
    return (0);
}