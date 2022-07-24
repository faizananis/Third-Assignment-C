int main()
{
    int cp=0;
    int sp=0;
    float p=0;
    float per=0;
    printf("Please Enter Cost Price of a Product: ");
    scanf("%d",&cp);
    printf("Please Enter Selling Price of a Product: ");
    scanf("%d",&sp);
    if(cp>sp)
    {
        p=cp-sp;
        per=p/cp*100;
        printf("The Loss percentage in a product is: %f %%",per);
    }
    else
    {
        p=sp-cp;
        per=p/cp*100;
        printf("The Profit percentage in a product is: %f %%",per);
    }
    return 0;
}
