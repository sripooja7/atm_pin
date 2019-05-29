/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pin=1234,n,ch,bal=30000,w,d;
    printf("Enter the pin\n");
    scanf("%d",&n);
    if(pin!=n)
    {
        for(int i=0;i<3;i++)
        {
            if(i==0)
            {
            printf("Enter the correct pin\n");
            scanf("%d",&n);
            if(pin==n)
                {
                printf("enter your choice\n");
                scanf("%d",&ch);
                goto repeat;
                i++;
                }
                else if(i==1)
                {
                  printf("Reenter the correct pin");
                scanf("%d",&n);
                if(pin==n)
                {
                printf("enter your choice\n");
                scanf("%d",&ch);
                goto repeat;
                i++;
                }
                }
                else
                {
                   printf("Pin entered is invalid!,Limit Exceeded!");
                break;
              
                }
            }
        }
    }
    else
    {
         printf("enter your choice\n1.check balance\n2.withdrawl\n3.deposit\n");
        scanf("%d",&ch);
        repeat:
        switch(ch)
        {
            case 1: printf("the available balance is %d",bal);
                    break;
            case 2: printf("enter the amount to withdraw\n");
                    scanf("%d",&w);
                    bal=bal-w;
                    printf("The available balance is %d",bal);
                    break;
            case 3: printf("enter the amount to deposit\n");
                    scanf("%d",&d);
                    bal=bal+d;
                    printf("The available balance is %d",bal);
                    break;
            default: printf("Enter the correct choice\n");
        
        }
    }
    return 0;
}
