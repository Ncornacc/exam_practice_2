#include <unistd.h>

int same_char(char *string, char c, int lenght)
{
    int i = 0;

    while(string[i] && (i < lenght || lenght == -1))
        if(string[i++] == c)
            return (1);
    return (0);
}

void ft_inter(char *string1, char *string2)
{
    int i = 0;

    while(string1[i])
    {
        if(!same_char(string1, string1[i], i) && !same_char(string2, string2[i], -1))
            write(1, &string1[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
        write(1, "\n", 1);
    else
        ft_inter(argv[1], argv[2]);
    return (0) ;
}