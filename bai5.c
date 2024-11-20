#include<stdio.h>
int main(){
    int a, b;
    printf("nhap so do chieu dai cua hinh chu nhat ");
    scanf("%d", &a);
    printf("nhap so do chieu rong cua hinh chu nhat ");
    scanf("%d", &b);
    int P = (a+b)*2;
    printf("chu vi hinh chu nhat la : %d\n", P);
    int S = a*b;
    printf("dien tich hinh chu nhat la : %d\n", S);
    return 0;
}
