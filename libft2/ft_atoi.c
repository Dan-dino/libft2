#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t  i;
    size_t  result;
    int     sign;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == 32 || str[i] == 9)
        i++;
    while (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
            sign *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

int main()
{
    char str[] = "      2  34rofi wsjef899";
    printf("%d", ft_atoi(str));
}