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

#if 0
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

#if 0
//8393
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
#endif

#if 0
//15552
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

#if 0
//2741
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    int a = 0;
    int b = 0;

    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}
#endif

#if 0
//2742
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    int a = 0;
    int b = 0;

    for(int i = n; i > 0; i--){
        printf("%d\n", i);
    }
    return 0;
}
#endif

#if 0
//11021
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    int a = 0;
    int b = 0;

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}
#endif

#if 0
//11022
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    int a = 0;
    int b = 0;

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }
    return 0;
}
#endif

#if 1
//2438
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#endif