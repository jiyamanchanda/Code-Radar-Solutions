#include <stdio.h>



int main() {
    int cs,ss;
    scanf("%d %d",&cs,&ss);
    if (ss>cs) {
        printf("Profit");
    }
    else if (cs>ss) {
        printf("Loss");
    }
    else {
    printf("No Profit No Loss");
    }
    return 0;
}