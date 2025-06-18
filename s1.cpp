//wacp to implement a

#include<stdio.h>
int sum (int,int);
int main()
 {
 	 int a,b,c;
 	 printf("enter two number");
 	 scanf("%d,%d,&a,&b");
 	 c=sum(a,b);
 	 printf("sum of two number is=%d",c);
 	 return(0);
 }
  int sum (int a,int b)
 	 {
 	 	return a+b;
		}
