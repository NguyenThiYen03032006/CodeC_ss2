#include<stdio.h>
int main(){
    float PI = 3.14;
    float r ;
    printf("nhap ban kinh hinh tron ");
    scanf("%f", &r);
    float chu_vi = 2*r*PI;
    printf("chu vi hinh tron la : %f\n", chu_vi);
    float dien_tich = PI*r*r;
    printf("dien tich hinh tron la : %f\n", dien_tich);
    return 0;
}
