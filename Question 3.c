int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("Your Given Number which is %d is an Even Number.",number);
    }
    else
    {
        printf("Your Given Number which is %d is an Odd Number.",number);
    }
    return 0;
}
