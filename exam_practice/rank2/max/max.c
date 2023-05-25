int		max(int* tab, unsigned int len);

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    unsigned int result;

    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return (result);
}