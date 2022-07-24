int main()
{
    char alphabet=' ';
    printf("Please Enter a Character: ");
    scanf("%c",&alphabet);
    if(alphabet>=65&&alphabet<=90)
    {
        printf("The Given Character which is %c is an Upper-case Alphabet.",alphabet);
    }
    else if(alphabet>=97&&alphabet<=122)
    {
        printf("The Given Character which is %c is a Lower-case Alphabet.",alphabet);
    }
    else
    {
        printf("It's not an Alphabet.");
    }
    return 0;
}
