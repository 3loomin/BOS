#if 0
//2739
#include <stdio.h>
int main() {
    int a = 0;
    scanf("%d",&a);
    for(int i = 1; i < 10; i++){
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
}
#endif

#if 1
//10950
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    int a = 0;
    int b = 0;

    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
#endif