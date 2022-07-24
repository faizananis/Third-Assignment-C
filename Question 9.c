int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    printf("Please Enter First Number: ");
    scanf("%d",&num1);
    printf("Please Enter Second Number: ");
    scanf("%d",&num2);
    printf("Please Enter Third Number: ");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3)
    {
        printf("The Given First Number which is %d is greatest among three given Numbers.",num1);
    }
    else if(num2>num1&&num2>num3)
    {
        printf("The Given Second Number which is %d is greatest among three given Numbers.",num2);
    }
    else if(num3>num1&&num3>num2)
    {
        printf("The Given Third Number which is %d is greatest among three given Numbers.",num3);
    }
    else if(num1==num2&&num1>num3)
    {
        printf("The Given First Number and Second Number which are %d are the greatest.",num1);
    }
    else if(num2==num3&&num2>num1)
    {
        printf("The Given Second Number and Third Number which are %d are the greatest.",num2);
    }
    else if(num3==num1&&num3>num2)
    {
        printf("The Given First Number and Third Number which are %d are the gratest.",num3);
    }
    else
    {
        printf("The Given First Number, Second Number, and Third Number which are %d are equal.",num1);
    }
    return 0;
}
