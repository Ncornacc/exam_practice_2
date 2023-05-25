#include <unistd.h>

void    ft_camel_to_snake(char *string)
{
    int i = 0;

    while(string[i])
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32; //32
            write(1, "_", 1);
        }
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
        ft_camel_to_snake(argv[1]);
    return 0;
}