#include <stdio.h>

int main(){

int num1, num2, num3;

printf("Number 1:");
scanf("%d",&num1);
printf("Number 2:");
scanf("%d",&num2);
printf("Number 3:");
scanf("%d",&num3);

if(num1 >= num2){
	if(num2 >= num3){
		printf("Median number is %d\n",num2);
	}
	else if(num1 >= num3){
		printf("Median number is %d\n",num3);
	}	
	else{
	printf("Median number is %d\n",num1);
}
	
}	
else if(num1 >= num3){
	printf("Median number is %d\n",num1);
}	
else if(num2 >= num3){
	printf("Median number is %d\n",num3);
}
else{
	printf("Median number is %d\n",num2);
}
	
	

return 0;

}
