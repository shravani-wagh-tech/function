#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n", a, b, add(a,b));
    return 0;
}