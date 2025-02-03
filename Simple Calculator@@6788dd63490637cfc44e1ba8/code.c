#include <stdio.h>


int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  char op ;
  scanf("%d",&op);
  switch(op) {
    case '+':
    printf("%d",a+b);
    break;

    case '_':
    printf("%d",a-b);
    break;

    case '*':
    printf("%d",a*b);
    break;

    case'/':
    printf("%d",a/b);
    break;

    default:
    printf("Invalid Operator");
    break;
  }
 
    return 0;
}