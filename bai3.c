#include<stdio.h>
int main(){
    int a, b;
    printf("nhap so thu nhat ");
    scanf("%d", &a);
    printf("nhap so thu hai ");
    scanf("%d", &b);
    int tong = a +b;
    printf("tong 2 so la : %d\n", tong);
    int hieu = a - b;
    printf("hieu 2 so la : %d\n", hieu);
    int tich = a * b;
    printf("tich 2 so la : %d\n", tich);
    float thuong = (float)a / b;
    printf("thuong 2 so la : %.3f\n", thuong);
    return 0;
    }

