int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number/100>0&&number/100<10)
    {
        printf("The Given Number which is %d is a Three-Digit Number.",number);
    }
    else
    {
        printf("The Given Number which is %d is not a Three-Digit Number.",number);
    }
    return 0;
}
