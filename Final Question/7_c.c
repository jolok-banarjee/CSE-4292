main()
{
    int x=10, y=10;
    int *p1=&x, *p2=&y;
    printf("%d\n",(*p1)++);
    printf("%d\n",--(*p2));
    printf("%d\n",(*p1)+(*p2)--);
    printf("%d\n",++(*p2)-*p1);
}
