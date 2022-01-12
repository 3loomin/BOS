#if 1
//15596
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long long sum(int* a, int n){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
int main() {
    int n = 0;
    int res = 0;
    scanf("%d", &n);

    int *a = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    res = sum(a,n);
    printf("%d",res);
    return 0;
}
#endif
