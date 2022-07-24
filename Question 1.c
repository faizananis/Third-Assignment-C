int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("The Given Number which is %d is a Positive Number.",number);
    }
    else
    {
        printf("The Given Number which is %d is a Non-Positive Number.",number);
    }
    return 0;
}
