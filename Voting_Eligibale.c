#include<stdio.h>
int main()
{
    int age;
    char id;

    printf("enter your age \n");
    scanf("%d",&age);

    if (age < 18)
    {
        printf("your not eligibal for voting \n");
    }
    else if (age == 18)
    {
        printf("do you have voter id, if you have press 'y'\n");
        scanf("%s",&id);

        if (id == 'y')
        {
            printf("your eligibale for voting \n");
        }
        else{
            printf("apply for voter id \n");
        }
    }
    else if(age > 18)
    {
        printf("do you have voter id, if you have voter id press 'y'\n");
        scanf("%s",&id);
        if(id == 'y')
        {
            printf("your eligibal for voting \n");
        }
        else{

            printf("your not eligibale for voting \n");
        }
    }
    return 0;
}