int main()
{
    int a=0;
    int b=0;
    int c=0;
    printf("Please Enter Value of First Side of a Triangle: ");
    scanf("%d",&a);
    printf("Please Enter Value of Second Side of a Triangle: ");
    scanf("%d",&b);
    printf("Please Enter Value of Third Side of a Triangle: ");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("The Given Triangle is a Valid Triangle.");
    }
    else
    {
        printf("The Given Triangle is not a Valid Triangle.");
    }
    return 0;
}
