int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number%5==0)
    {
        printf("Your Given Number which is %d is divisible by 5.");
    }
    else
    {
        printf("The Given Number which is %d is not divisible by 5.",number);
    }
    return 0;
}
