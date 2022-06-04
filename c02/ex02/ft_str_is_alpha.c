#include<unistd.h>
#include<string.h>

int ft_str_is_alpha(char *str)
{
    int index;

    index = 0;

    while (str[index] != '\0')
    {
        if (str[index] > 64 && str[index] < 91 || str[index] > 98 && str[index] < 123)
        {
            index++;
        }
        
        if (str[index] == '\0')
            return (1);
        else 
            return (0);
    }
}

int main (void)
{
    char str[] = "hello";
    int result;
    int result2;
    
    result = ft_str_is_alpha(str);
    result2 = result + '0';
    write(1, &result2, 1);
    return (0);
}