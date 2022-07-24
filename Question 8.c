int main()
{
    int number=0;
    printf("Please Enter a year to check it is a leap year or not: ");
    scanf("%d",&number);
    printf("\n");
    if(number%100==0)
    {
        if(number%400==0)
        {
            printf("The Given Year is a Leap Year.");
        }
        else
        {
            printf("The Given Year is not a Leap Year.");
        }
    }
    else if(number%4==0)
    {
        printf("The Given Year is a Leap Year.");
    }
    else
    {
        printf("The Given Year is not a Leap Year.");
    }
    printf("\n");
    return 0;
}
