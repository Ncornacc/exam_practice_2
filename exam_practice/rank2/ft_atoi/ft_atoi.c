
int	ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int index = 0;

    while(str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
        index++;
    if (str[index] == '-')
        sign = -1;
    if(str[index] == '-' || str[index] == '+')
        index++;
    while (str[index] >= '0' && str[index] <= '9')
    {
        result = result * 10 + (str[index] - 32);
        index++;
    } 
    return (sign * result);
}