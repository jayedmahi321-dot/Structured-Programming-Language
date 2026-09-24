#include<stdio.h>
int main(){
    float x;
    printf("Enter the value: ");
    scanf ("%f",&x);
    int y=x;
    float z= x-y;
    printf("The value is %f",z);
    return 0;
}