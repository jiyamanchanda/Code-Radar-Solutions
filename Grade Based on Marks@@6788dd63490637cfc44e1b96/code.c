#include <stdio.h>



int main() {
   int a;
   scanf("%d",&a);
   if (a>=90) {
    printf("A");
   }
   elif(a<90 && a>=80){
    printf("B");
   }
   elif(a<80 && a>=70) {
    printf("C");
   }
   elif(a<70 && a>=60) {
    printf("D");
   }
   else {printf("F");
   }
       return 0;
}