int main()
{
    int num1=0;
    int num2=0;
    printf("Please Enter a Number 1: ");
    scanf("%d",&num1);
    printf("Please Enter a Number 2: ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("The Given First Number %d is greater than the Second Number %d.",num1,num2);
    }
    else if(num1==num2)
    {
        printf("Both Numbers are Equal! The Given Number is %d.",num1);
    }
    else
    {
        printf("The Given Second Number %d is greater than the First Number %d.",num2,num1);
    }
    return 0;
}
