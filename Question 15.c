int main()
{
    int number=0;
    printf("Please Enter a Numeber: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("The Given Number %d is Positive.",number);
    }
    else if(number==0)
    {
        printf("The Given Number %d is 0.",number);
    }
    else
    {
        printf("The Given Number %d is Negative.",number);
    }
    return 0;
}
