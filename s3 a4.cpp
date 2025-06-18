 // wacp to implement the number to check number is armstrong
 #include<stdio.h>
 void isarmstrong (int);
 int main()
 { 
     int n; 
	   printf("enter any number :");
	   scanf("%d",&n);
	   isarmstrong (n);
	   return 0;
	   
 }
void isarmstrong (int n)
{  
   int r,r1,n1,a=0,i,digit=0;
   n1=n;
   while(n!=0)
    {  
     r=n%10;
     r1=1;
     for (i=1;i<=digits;i++)
     { 
          r1=r1*r;
		 }
		 a=a+r1;
		 n=n/10;
		}
   if(n1==a)
   printf("%d is armstrong ",a);
   else
   print ("%d is not armstrong ",a)
   
}
 
