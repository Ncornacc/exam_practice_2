#include <unistd.h>

void    ft_alpha_mirror(char *string)
{
    int i = 0;

    while(string[i])
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
            string[i] = 'Z' - string[i] + 'A';
        else if(string[i] >= 'a' && string[i] <= 'z')
            string[i] = 'z' - string[i] + 'a';
        write(1, &string[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        ft_alpha_mirror(argv[1]);
    return 0;
}