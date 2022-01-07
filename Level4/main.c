#if 0
//10952
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;

    while(1){
        scanf("%d %d", &a, &b);
        if(a == 0 && b ==0) break;
        else printf("%d\n",a + b);
    }
    return 0;
}
#endif

#if 0
//10951
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    while(1){
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);
        if(a == 0 && b ==0) break;
        else printf("%d\n",a + b);
    }
    return 0;
}
#endif

#if 0
//1110
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int a = 0;
    int atemp = 0;
    int a1 = 0;
    int a2 = 0;
    int temp = 0;
    int cycle = 1;
    scanf("%d", &a);
    if(a < 10) a *= 10;
    atemp = a;
    while(1) {
        a1 = atemp / 10;
        a2 = atemp % 10;
        temp = a1 + a2;
        atemp = a2 * 10 + temp % 10;
        if(a == atemp){
            printf("%d",cycle);
            break;
        }
        else cycle++;

    }
    return 0;
}
#endif