#include<stdio.h>
#include<conio.h>
int main()
{
	// 1. WAP to find the Nth term of the Fibonnaci series. 
		/*int a=-1,b=1,c,i,n;
		printf("Enter a number: ");
		scanf("%d",&n);

		for (i = 0; i <n; i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		printf("%d",c);*/


	// 2. WAP to find the N term of the Fibonnaci series. 
		/*int a=-1,b=1,c,i,n;
		printf("Enter a number: ");
		scanf("%d",&n);

		for (i = 0; i <n; i++)
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
			
		}*/



	// 3. Write a program to check Whether a given number is there in the fibonacci series or not.

	/*int a=0,b=1,next,n;

	printf("Enter a number : ");
	scanf("%d",&n);

	if(n==0 || n==1){
		printf(" this is a fibonacci number");
	}		
	else{
		next=a+b;
		while(next<n){
			a=b;
			b=next;
			next=a+b;
		}
		if (next==n)	
		{
			printf("this is a fibonacci number ");
		}
		else{
			printf("this is not a fibonacci number ");
		}
	}*/


	// 4. Write a program to calculate HCF of two numbers;

		/*int a,b,H;

		printf("enter two number for calculate HCF : ");
		scanf("%d%d",&a,&b);

		for(H=a<b?a:b; H>=1; H--){
			if(a%H==0 && b%H==0)
			break;
		}
		printf("HCF is %d ",H);*/


	// 5. WAP to check whether two given numbers co-prime numbers or not.

		/*int a,b,i,min;
		printf("Enter two number :" );
		scanf("%d %d",&a,&b);

			min=a<b?a:b;
		for(i=2; i<=min; i++){
			if(a%i==0 && b%i==0)
			break;
		}

		if(i==min+1)
			printf("%d and %d are co-prime",a,b);
		else
			printf("%d and %d are not co-prime",a,b);*/


	// 6. WAP to print all prime numbers under 100;

	int num,i,j;
	printf("Enter a number : ");
	scanf("%d",&num);

	for(i=1; i<=num; i++){
		for (j = 2; j<=i/2; j++)
		{
			if(i%j==0)
			break;
		}
		if (j>i/2)
		printf("%d\t",i);		
	}


	// 07. WAP to print all prime numbers between two given numbers.

	/*int num,num1,min,max,i,j;

	printf("Enter two numbers for all prime number between: ");
	scanf("%d%d",&num,&num1);

	min=num<num1?num:num1;	
	max=num>num1?num:num1;	

	for(i=min; i<=max; i++){
		for(j=2; j<i; j++){
			if(i%j==0)
			break;
		}
		if(i==j)
		printf("%d ",i);
	}*/
	



	// 08. WAP to find next prime number of a given number.
	/*int a,i,j;
	printf("Enter a number: ");
	scanf("%d",&a);

	for(i=a+1; i>0; i++){
		for(j=2; j<i; j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j)
		break;
	}
	printf("%d ",i);*/



	// 09. WAP to check whether a giben number is an Armstrong number or not.

	/*int a,i,r,ans=0,num;

	printf("Enter a number of three digits only for armstromg number: ");
	scanf("%d",&a);

	num=a;
	while(a>0){
		r=a%10;
		ans=(r*r*r)+ans;
		a=a/10;
	}
	if(num==ans)
		printf("%d is a armstrong number",num);
	else
		printf("%d is not a armstrong number",num);*/


	// 10. WAP to print all armstrong number under 1000;

	/*int n,r,x,s;

	printf("Armstrong numbers are\n ");
	//scanf("%d",&num);

	for(n=1; n<=1000; n++){
		s=0;
		x=n;
		while(x!=0){
			r=x%10;
			s=s+(r*r*r);
			x=x/10;
		}
		if(s==n)
		printf("%d \t",n);
	}*/
	
}