#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    if (a>17) {  //include 18 properly
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}