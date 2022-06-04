#include<unistd.h>
#include<stdio.h>

char ft_strncpy(char *src, char *dest, unsigned int n)
{
    int index;

    index = 0;
    while (index <= n)
    {
        dest[index] = src[index];
        index++ ;
    }
    printf("%s", dest);
}

int main(void)
{
        // int len1;
        // int len2;

        unsigned int srclen;

        srclen = 3;

        char src[6] = "hello";
        char dest[6] = "";
        
        // src[6] = "hello";
        // dest[6] = "";
        // len1 = strlen(src);
        // len2 = strlen(dest);

        // srcptr = &src;
        // destptr = &dest;
        ft_strncpy(src,dest,srclen);
        return(0);
}