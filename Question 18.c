int main()
{
    int month=0;
    printf("Please Enter Number of a Month: ");
    scanf("%d",&month);
    printf("\n");
    if(month>=1&&month<=12)
    {
        if(month==2)
        {
            printf("There are 28 days in the Month No.2.");
        }
        else if(month%2==1&&month<=7)
        {
            printf("There are 31 days in the Month No.%d.",month);
        }
        else if(month%2==0&&month>7)
        {
            printf("There are 31 days in the Month No.%d.",month);
        }
        else
        {
            printf("There are 30 days in the Month No.%d.",month);
        }
    }
    else
    {
        printf("Invalid Month Number!");
    }
    return 0;
}
