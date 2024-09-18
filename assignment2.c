#include<stdio.h>
int main(){

    /*int n,num;
    printf("enter a number : ");
    scanf("%d",&n);
    num=n&1;
    if(num==0)
        printf("number is even");
    else
        printf("number is odd");*/

       

       /* printf("%d\n",sizeof(int));
         printf("%d\n",sizeof(float));
         printf("%d\n",sizeof(double));
        printf("%d\n",sizeof(char));*/

        /*int num;
        printf("enter a number : ");
        scanf("%d",&num);
        num=num/10;
        num=num*10;
        printf("%d",num);*/

        /*int num,digit;
        printf("enter a number : ");
        scanf("%d",&num);
        printf("\nenter a digit 9 : ");
        scanf("%d",&digit);

        num=num*10+digit;
        printf("\n%d",num);*/

        /*float usd,inr;
        printf("enter anount in INR : ");
        scanf("%f",&inr);
        usd=inr/79.365;
        printf("inr=%f =%f USD",inr,usd);*/

        int num,rotate,i=1;
        printf("enter a number : ");
        scanf("%d",&num);

       for( ;num!=0; )
       {
         rotate=num%10;
        
        printf("%d",rotate);
        num=num/10;
        i++;
        }
}