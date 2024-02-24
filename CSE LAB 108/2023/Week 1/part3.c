#include <stdio.h>

int main(){

int age, experience, salary;

printf("Enter your age:");
scanf("%d",&age);

printf("How many years of experience do you have ?\n");
scanf("%d",&experience);

if(age < 20){

	if(experience <=10){
		printf("Your Salary: 10000\n");
	}
	else if(experience > 10){
		printf("Error\n");
	}

}

else if(age >= 20 && age <= 50){

	if(experience <= 10){
		printf("Your Salary: 15000\n");
	}
	else if(experience > 10){
		printf("Your Salary: 20000\n");
	}
}

else if(age > 50){
	
	if(experience <= 10){
		printf("Your Salary: 20000\n");
	}
	else if(experience > 10){
		printf("Your Salary: 25000\n");
	}
}



return 0;

}
