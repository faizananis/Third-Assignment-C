int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number%3==0||number%7==0)
    {
        if(number%3==0)
        printf("The Given Number %d is divisible by 3.",number);
        else
        printf("The Given Number %d is divisible by 7.",number);
    }
    else
    {
        printf("The Given Number %d is not divisible by 3 and also not divisible by 7.",number);
    }
    return 0;
}
