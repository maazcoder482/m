// convert decimals to binary  
#include<stdio.h>
int main()
{ 
    int n,r,c=1,sum=0;
     printf("enter any number :");
		 scanf ("%d", &n);
		 printf(" binary  number equivalent to given decimals \n");
		 while (n>=1)
   
   {
   	     r=n%2;
   	    c=c*10;
   	    sum +=c*r;
   	    n=n/2;
	 }
	 printf("%d", sum/10);
	 return (0);
}
