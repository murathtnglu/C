

#include <iostream>
#include<stdio.h>
#include<math.h>

int main()
{
    int birincisayi = 1;
    int ikincisayi = 1;
    int i;

    printf("%d\n%d\n", birincisayi, ikincisayi);

    for ( i = 0; i <10; i++)
    {
        int a = ikincisayi;

        ikincisayi += birincisayi;

        birincisayi = a;

        printf("%d\n", ikincisayi);

    }




}


