#include<stdio.h>
#include<ctype.h>
int main(){
// 01. WAP to check whether a given number is positive or non-positve.
    /*int n;
    printf("enter a number : ");
    scanf("%d",&n);

    if(n>0)
    printf("positive number");
    else
    printf("non-positive number");*/

    // 02. WAP to check whether a given number is divisible by 5 or not;
   /* int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    if(n%5==0)
        printf("%d is divisible by 5",n);
    else
        printf("%d is not divisible by 5",n);*/

    // 03. WAP to check whether a given number is an even number or an odd number.
    /*int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("number is even");
    else
        printf("number is odd");*/


    // 04. WAP to check whether a given number is an even number or an odd number without using % operator.
    /*int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if((n&1)==0)
        printf("number is even");
    else
        printf("number is odd");*/


    // 05. WAP to check whether a given number is a three-digit number or not.
    /*int n;
    printf("enter a three digit number : ");
    scanf("%d",&n);
   if (n>99&&n<1000)
        printf("this number is three digit ");
    else
        printf("this number is not three digit");*/


    
    // 06. WAP to print greater between two numbers. Print one number of both are the same.
        /*int a,b;
        printf("Enter two numbers : ");
        scanf("%d%d",&a,&b);
        if(a>b)
            printf("%d is greater than %d",a,b);
        else if(a==b)
            printf("%d, both number is equal",(a+b)/2);
        else
            printf("%d is greater than %d",b,a);*/


        
    // 07. WAP to check whether roots of a giben quadratic equation are real & distinct, real & equal or imaginary roots.
        /*int a,b,c,roots;
        printf("Enter a b c numbers : ");
        scanf("%d%d%d",&a,&b,&c);
            roots=b*b-4*a*c;

            if(roots>0)
                printf("distinct & real");
            else if(roots<0)
                 printf("imaginary");
            else
                printf("real & equal");*/

     // 08. WAP to check whether a given year is a leap year or not.
      /*  int year;
        printf("enter a year : ");
        scanf("%d",&year);

        if(year%4==0)
            printf("this is a leap year");
            else
            printf("this is not a leap year");*/


    // 09 WAP to check whether among three given numbers. Print number once if the greatest number appears two or three times;
    /*int a,b,c;
    printf("enter three number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    printf("%d a is greatest number",a);
    else if(b>a&&b>c)
    printf("%d b is greatest number",b);
    else if(c>a&&c>b)
    printf("%d c is greatest number ",c);
    else if(((a+b)/2)>c)
    printf("%d, a b both number is equals",(a+b)/2);
    else if(((a+c)/2)>b)
    printf("%d, a c both number is equals",(a+c)/2);
    else if(((b+c)/2)>a)
    printf("%d, b c both number is equals",(b+c)/2);
    else
    printf("%d, a b c these three number is equals",(a+b+c)/3);*/


    // 10 
   /* int cp,sp,profit,loss;
    float profitP,lossP;
    printf("enter selling price : ");
    scanf("%d",&sp);
    printf("enter cost price : ");
    scanf("%d",&cp);
    

    profit=sp-cp;
    loss=cp-sp;
    //profitP=(profit/cp)*100;
    if(profit>loss){
        profitP=(profit*100)/cp;
    printf("%f  percenta profit  ",profitP);
    }
    else if (profit==loss)
    {
        printf(" no profit or no loss");
    }
    else{
        lossP=(loss*100.0)/cp;
    printf("%f percent loss",lossP);}*/



    //11 
    /*int math, phy, che, bio, eng;
    printf("Enter the marks of math subject : ");
    scanf("%d", &math);
    printf("Enter the marks of phy subject : ");
    scanf("%d", &phy);
    printf("Enter the marks of che subject : ");
    scanf("%d", &che);
    printf("Enter the marks of bio subject : ");
    scanf("%d", &bio);
    printf("Enter the marks of eng subject : ");
    scanf("%d", &eng);
    
    if(math<33){
        printf("\nThe student is failed in mathematics\n");
    }
    if(phy<33){
        printf("The student is failed in physics\n");
    }
    if(che<33){
        printf("The student is failed in chemistry\n");
    }
    if(bio<33){
        printf("The student is failed in biology\n");
    }
    if(eng<33){
        printf("The student is failed in english\n");
    }
    
    if(math>=33){
        printf("\nThe student is passed in mathematics\n");
    }
    if(phy>=33){
        printf("The student is passed in physics\n");
    }
    if(che>=33){
        printf("The student is passed in chemistry\n");
    }
    if(bio>=33){
        printf("The student is passed in biology\n");
    }
    if(eng>=33){
        printf("The student is passed in english\n");
    }*/



    //12. 
    /*char ch;
    printf("Enter a charecter lowercase or Uppercase : \n");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)
        printf(" upper case");
    else if(ch>=97&&ch<=122)
        printf("lower case \n");
    else
        printf("please enter a alphabet");*/



    //13
    /*int num;
    printf("enter a number : ");
    scanf("%d",&num);

    if(num%3==0&&num%2==0)
        printf("this number is divisible by 2 and 3");
    else 
    printf("this number is not divisible by 2 and 3");*/



    //14
    /*int num;
    printf("enter a number : ");
    scanf("%d",&num);

    if(num%3==0&&num%7==0)
        printf("this number is divisible by 3 and 7");
    else if(num%3==0)
        printf("this number is divisible by only 3");
    else if(num%7==0)
        printf("this number is divisible by only 7");
    else
        printf("this number is not divisible by 3 and 7");*/


    //15
    /*int num;
    printf("enter a number : ");
    scanf("%d",&num);

    if(num>0)
        printf("this is positive number ");
    else if(num<0)
        printf("this is negative number ");
    else
        printf("this number is zero ");*/



    //16
    /*char ch;
    printf("Enter a charecter  : \n");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)
        printf(" upper case");
    else if(ch>=97&&ch<=122)
        printf("lower case \n");
    else if(ch>=32&&ch<=47)
        printf("special character");
    else if(ch>=48&&ch<=57)
        printf("this is a digit");
    else
        printf("please enter alphaber, special character or digit ");*/



    //17
    /*int a,b,c;
    printf("Enter a charecter  : \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c&&a+c>b&&b+c>a)
        printf(" this is a valid trangle");
    else
        printf(" this is not a valid trangle");*/

    //18
    int month_num;
    printf("enter a month number : ");
    scanf("%d",&month_num);

    if(month_num==1||month_num==3||month_num==5||month_num==7||month_num==8||month_num==10||month_num==12)
        printf("31st days in this month");
    else if(month_num==4||month_num==6||month_num==7||month_num==9)
         printf("30 days in this month");
    else
        printf("28/29 days in this month because this month is Febraury");
        
}