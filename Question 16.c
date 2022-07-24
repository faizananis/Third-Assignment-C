int main()
{
    int number=0;
    printf("Please Enter any Single Character: ");
    scanf("%c",&number);
    if(number>=48&&number<=57)
    {
        printf("The given Character \'%c\' is a Digit.",number);
    }
    else if(number>=65&&number<=90)
    {
        printf("The given Character \'%c\' is an Uper-Case Aplhabet.",number);
    }
    else if(number>=97&&number<=122)
    {
        printf("The given Character \'%c\' is a Lower-Case Alphabet.",number);
    }
    else
    {
        printf("The given Character \'%c\' is a Special Character.",number);
    }
    return 0;
}
