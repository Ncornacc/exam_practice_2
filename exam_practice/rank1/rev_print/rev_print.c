#include <unistd.h>

// 

void ft_rev_print(char *string)
{
    int end = 0;
    int i = 0;
    
    while(string[end])
        end++;
    end--;
    while(string[i])
    {
        write(1, &string[end--], 1);
        i++;
    }
    string[end] = '\0';
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write (1, "\n", 1);
    else
        rev_print(argv[1]);
    return(0);
}

// void rev_print(char *string)
// {
//     int i = 0;

//     while (string[i])
//         i++;
//     while (i >= 0)
//         write(1, &string[i--], 1);
//     write (1, "\n", 1);  
// }