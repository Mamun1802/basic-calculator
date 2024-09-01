#include<stdio.h>
#include<conio.h>
#include<math.h>
//This is a calculator making program

int main()
{
    int n,i;
    float result,num=0;
    char choice;
    printf("Enter how many numbers you want to calculate:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("You must enter positive values");
        return 1;
    }
    else
    {

        printf("Enter the first number:");
        scanf("%f",&result);

        for(i=1; i<n; i++)
        {
            printf("Enter your choice (+,-,*,/ ):");
            scanf(" %c",&choice);
            printf("Enter the second number:");
            scanf("%f",&num);

            switch(choice)
            {
            case '+':
                result+=num;
                break;
            case '-':
                result-=num;
                break;
            case '*':
                result*=num;
                break;
            case '/':
                if(num!=0)
                {
                    result/=num;
                }
                else
                {
                    printf("Error:Division by Zero\n");
                }
                break;
            default :
                printf("Invalid choices!Please enter any of +,-,*,/");
                return 1;
            }
        }

        printf("Result = %.2f\n",result);

    }
    return 0;
}



