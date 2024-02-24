#include <stdio.h>

int main(){

float number_x, number_y, max, number_z;


printf("Enter the X number:");
scanf("%f",&number_x);
printf("Enter the Y number:");
scanf("%f",&number_y);

if(number_x >= number_y){
	max = number_x;
}
else{
	max = number_y;
}

number_z = (number_x / number_y)+(max / (number_x+number_y));

printf("%.4f\n",number_z);




return 0;

}
