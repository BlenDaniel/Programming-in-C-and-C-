#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    do{
        scanf("%d", &n);
    }
    while(n < 0);
    if(n == 1)
        printf("%d day = %d hours", n, n*24);
    else
        printf("%d days = %d hours", n, n*24);

    return 0;
}