#include <stdio.h>

int main(){

int weight;
float height, bmi;

printf("Enter your height(m): ");
scanf("%f",&height);
printf("Enter your weight(kg): ");
scanf("%d",&weight);

bmi = (weight/(height*height));

if(bmi <= 18.5){
	printf("underweight\n");
}
else if(bmi <= 24.5){
printf("average weight\n");
}
else if(bmi <= 29.9){
printf("overweight\n");
}
else{
printf("obese\n");
}




return 0;

}
