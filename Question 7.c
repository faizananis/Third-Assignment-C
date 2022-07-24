int main()
{
    int a=0;
    int b=0;
    int c=0;
    int ans=0;
    printf("Please Enter Value of \'a\' in quadratic equation: ");
    scanf("%d",&a);
    printf("Please Enter Value of \'b\' in quadratic equation: ");
    scanf("%d",&b);
    printf("Please Enter Value of \'c\' in quadratic equation: ");
    scanf("%d",&c);
    ans=b*b-4*a*c;
    if(ans>0)
    {
        printf("The Roots of given equation are Real and Distinct.");
    }
    else if(ans==0)
    {
        printf("The Roots of given equation are Real and Equal.");
    }
    else
    {
        printf("The Roots of given equation are Imaginary.");
    }
    return 0;
}
