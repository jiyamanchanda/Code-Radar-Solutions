#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(!(a>0)&&!(b>0)) {    //using not differently and then also not adding the equal,
                               // literally follow the question step by step
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}