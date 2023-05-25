#include <unistd.h>

void    ft_rotone(char *string)
{
    int  i = 0;
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    char b_alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num = 0;
    
    while(string[i])
    {
        if (string[i] >= 97 && string[i] <= 122)
        {
            num = (string[i] - 'a');
            if (num == 25)
                num = 0;
            else
                num++;
             write(1, &alphabet[num], 1);
        }
        else if (string[i] >= 65 && string[i] <= 90)
        {
            num = (string[i] - 'A');
            if (num == 25)
                num = 0;
            else
                num++;
            write(1, &b_alphabet[num], 1);
        }
        else
        {
            write (1, &string[i++], 1);
            continue;
        }
        num = 0;
        i++;
    }
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    
    if (argc != 2)
        write (1, "\n", 1);
    else
        ft_rotone(argv[1]);
    return (0);
}