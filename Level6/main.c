#if 0
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
#if 1
//4673
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void d(int a,int n, int* arr){
    int temp = a;
    while(n > 0){
        temp += a % 10;
        a = a / 10;
        n--;
    }
    arr[temp] = 1;
    int b = log10(temp) + 1;
    if(temp < 100) d(temp,b,arr);
}
int main() {
    int arr[10100] = {0,};
    for(int i = 1; i < 10000; i++){
        int n = log10(i) + 1;
        d(i, n, arr);
    }
    for(int j = 1; j < 10000; j++){
        if(arr[j] == 0) printf("%d\n",j);
    }
    return 0;
}
#endif

