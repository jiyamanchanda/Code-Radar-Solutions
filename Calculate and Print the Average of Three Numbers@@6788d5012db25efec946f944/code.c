#include <stdio.h>



int main() {
   float a,b,c;
   scanf("%lf %lf %lf",&a,&b,&c);
   float d = (a+b+c)/3;
   printf("Average: %.2lf",d);

    return 0;
}