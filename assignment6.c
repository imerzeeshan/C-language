#include<stdio.h>
#include<conio.h>
int main(){

    //1. Write a program to calculate sum of first N natural numbers
   /*int n,num=0;
    printf("Enter a number as far as you want to print : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        num=num+i;
        printf("%d \t",num);*/


    //2. Write a program to calculate sum of first N even natural numbers
    /*int n1,num1=0;
    printf("\nEnter a N number as far as you want to print : ");
    scanf("%d",&n1);

    for (int i = 1; i <= n1; i++)
    {
        if(i%2==0){
            num1=num1+i;
        }        
    }
     printf("\n%d is sum of N even natural number",num1);*/


    
    // 3. Write a program to calculate sum of first N odd natural numbers
    /*int n2,num2=0;
    printf("Enter a number to print sum of first N odd natural number : ");
    scanf("%d",&n2);

    for(int i=1;i<=n2;i+=2)
    {
        num2=num2+i;
    }
    printf("%d is sum of first N odd natural number",num2);*/



    // 4. Write a program to calculate sum of squares of first N natural numbers.
    /*int n3,num3=0;
    printf("Enter a number to print sum of squares of first N natural number : ");
    scanf("%d",&n3);

    for(int i=1;i<=n3;i++)
    {
        num3=num3+i*i;
    }
    printf("%d is sum of first N natural number. ",num3);*/



    // 5. Write a program to calculate sum of cubes of first N natural numbers

    /*int n4,num4=0;
    printf("Enter a number to print sum of cubes of first N natural numbers :");
    scanf("%d",&n4);

    for(int i=1;i<=n4;i++)
    {
        num4=num4+i*i*i;
    }
    printf("%d is sum of cubes of first N natural numbers. ",num4);*/



    // 6. Write a program to calculate factorial of a number

    /*int n5,num5=1;
    printf("Enter a number to calculate factorial : ");
    scanf("%d",&n5);

    for (int i=1;i<=n5;i++)
    {
        num5=num5*i;
    }
    printf("%d is a factorial of %d",num5,n5);*/



    // 7. Write a program to count digits in a given number
    /*int n6,num6=0;
    printf("Enter a number to count how many digits in the number : ");
    scanf("%d",&n6);
    // int i=1;
     for(int i=1;n6!=0;i++)      //while(n6!=0)
    {
        n6=n6/10;
        num6++;
    }
    printf("%d",num6);*/
    


    // 8. Write a program to check whether a given number is a Prime number or not.
    /*int prime,i;
    printf("enter a number : ");
    scanf("%d",&prime);

    for(i=2;i<prime;i++)
    {
       if(prime%i==0)
        break;
    }
        if(prime==i)
            printf("%d this is prime number",prime);
        else
            printf("%d this is not a prime number",prime);*/



    //09. Write a programe to calculate LCM of two numbers.

        /*int num7,num8,i;
        printf("enter two numbers : ");
        scanf("%d%d",&num7,&num8);

        for(i=2;i<num7*num8;i++){
            if (i%num7==0 && i%num8==0)
            {
                break;
            }
            
        }
            printf("lcm is %d ",i);*/



    //10. write a program to reverse a given number;

         int  num9,ans=0,r;

        printf("enter a number : ");
        scanf("%d",&num9);

        for (int i = 1; i <=num9; i++)
        {
            r=num9%10;
            ans=ans*10+r;
            num9=num9/10;
        }
        printf("Reverse number is : %d",ans);
        
}