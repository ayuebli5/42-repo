#include<unistd.h>
#include<stdio.h>

char ft_strcpy(char *src, char *dest)
{
    int index;

    index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++ ;
    }
}

int main(void)
{
        // int len1;
        // int len2;

        char src[6] = "hello";
        char dest[6] = "whooi";
        
        // src[6] = "hello";
        // dest[6] = "";
        // len1 = strlen(src);
        // len2 = strlen(dest);

        // srcptr = &src;
        // destptr = &dest;
        ft_strcpy(src,dest);
        return(0);
}