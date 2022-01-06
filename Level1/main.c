#if 0
//2557
#include <stdio.h>
int main() {
    printf("Hello World!\n");
    return 0;
}
#endif

#if 0
//10718
#include <stdio.h>
int main() {
    printf("강한친구 대한육군\n");
    printf("강한친구 대한육군\n");
    return 0;
}
#endif
#if 0
//10171
#include <stdio.h>
int main(){
    printf("\\    /\\\n"
           " )  ( ')\n"
           "(  /  )\n"
           " \\(__)|");
}
#endif

#if 0
//10172
#include <stdio.h>
int main(){
    printf("|\\_/|\n"
           "|q p|   /}\n"
           "( 0 )\"\"\"\\\n"
           "|\"^\"`    |\n"
           "||_/=\\\\__|");
}
#endif

#if 0
//1000
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
}
#endif

#if 0
//1001
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("%d",a-b);
}
#endif

#if 0
//10998
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("%d",a*b);
}
#endif

#if 0
//1008
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    double a = 0;
    double b = 0;
    scanf("%lf %lf",&a,&b);
    printf("%.9lf",a/b);
}
#endif

#if 0
//10869
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
}
#endif

#if 1
//10430
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    scanf("%d %d %d",&A,&B,&C);
    printf("%d\n",(A+B)%C);
    printf("%d\n",((A%C) + (B%C))%C);
    printf("%d\n",(A*B)%C);
    printf("%d\n",((A%C) * (B%C))%C);
}
#endif