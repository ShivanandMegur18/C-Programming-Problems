#include<stdio.h>
int main()
{
    int age;
    char id;

    printf("Enter your age \n");
    scanf("%d",&age);

    if (age < 18)
    {
        printf("Your not eligibal for voting \n");
    }
    else if (age == 18)
    {
        printf("Do you have voter id, if you have press 'y'\n");
        scanf("%s",&id);

        if (id == 'y')
        {
            printf("Your eligibale for voting \n");
        }
        else{
            printf("Apply for voter id \n");
        }
    }
    else if(age > 18)
    {
        printf("Do you have voter id, if you have voter id press 'y'\n");
        scanf("%s",&id);
        if(id == 'y')
        {
            printf("Your eligibal for voting \n");
        }
        else{

            printf("Your not eligibale for voting \n");
        }
    }
    return 0;
}