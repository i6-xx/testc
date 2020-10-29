#include <stdio.h>
int main(void)
{
    char a[3];
    memcpy(a,"aaaaaaa",5);
    printf("Hi %s\n",a);
    return 0;
}
