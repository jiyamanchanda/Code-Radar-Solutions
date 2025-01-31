#include <stdio.h>



int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   if (a%b==0) {    //if divisible, remainder will be 0 
    printf("Yes");
   }
   else {
    printf("No");
   }
    return 0;
}