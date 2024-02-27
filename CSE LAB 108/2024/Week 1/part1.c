#include <stdio.h>

int main(){

int i1,i2,i3,i4;

printf("Enter i1:");
scanf("%d",&i1);
printf("Enter i2:");
scanf("%d",&i2);
printf("Enter i3:");
scanf("%d",&i3);
printf("Enter i4:");
scanf("%d",&i4);

printf("%d\n",(((i1 * i1) + (i3 * i4)) - i1));

printf("%d\n",(i1*3 + i2*5 + i3*7 + i4*9));

printf("%f\n",(1.0*(i1+i2+i3+i4)/(i1*i2*i3*i4)));





return 0;

}
