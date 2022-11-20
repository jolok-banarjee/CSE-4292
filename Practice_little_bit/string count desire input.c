void main()
{
#define SIZE 25
    int i, count=0;
    char name[SIZE];
    scanf("%s", name);
    printf("Name = %s \n", name);
    for (i=0; name[i]!='\0'; i++)
        if (name[i] == 'a') count++;
    printf("Total a's = %d\n", count);
}
