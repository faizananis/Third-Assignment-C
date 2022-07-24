int main()
{
    int sub1=0;
    int sub2=0;
    int sub3=0;
    int sub4=0;
    int sub5=0;
    printf("Please Enter Marks of Subject 1: ");
    scanf("%d",&sub1);
    printf("Please Enter Marks of Subject 2: ");
    scanf("%d",&sub2);
    printf("Please Enter Marks of Subject 3: ");
    scanf("%d",&sub3);
    printf("Please Enter Marks of Subject 4: ");
    scanf("%d",&sub4);
    printf("Please Enter Marks of Subject 5: ");
    scanf("%d",&sub5);
    if(sub1<33||sub2<33||sub3<33||sub4<33||sub5<33)
    {
        printf("You are Failed in the Examination.");
    }
    else
    {
        printf("You are Passed in the Examination.");
    }
    return 0;
}
