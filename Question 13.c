int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number%2==0&&number%3==0)
    {
        printf("The Given Number which is %d is divisible by 2 and divisible by 3.",number);
    }
    else
    {
        printf("The Given Numeber which is %d is not divisible by 2 and 3 simultaneously.",number);
    }
    return 0;
}
