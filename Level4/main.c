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

#if 1
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