//wacp to impliment a function which check a given is prime or not 
#include<stdio.h>
int isprime(int num)
{
if (num <=1)
    return  0;
		for (int i =2; i<= num / 2; i++){
			if (num % i == 0)
			return 0;
		}	
		return 1;
}

int main (){
	int number ;
	printf("enter a number:");
	scanf("%d",& number);
	
	if (isprime(number))
	printf("%d is a prime number.\n",number);
	else
	printf("%d is not a prime number.\n",number);
	return 0;
}
