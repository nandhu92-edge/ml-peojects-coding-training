#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.50;
    float d = 0.0;
    printf("Please enter the amount to be withdrawn\n");
    scanf("%d", &a);
    c = fmod(a, 5.0);
    printf("%f", c);
    return 0;
}
