#include <stdio.h>
int main ()
{
    char lname[81], fname[81];
    int count, id_num;
    puts ("Enter the last name, firstname, ID number separated");
    puts ("by spaces, then press Enter \n");
    count = scanf ("%s%s%d", lname, fname,&id_num);
    printf ("%d items entered: %s %s %d\n", count,fname,lname,id_num);
    return 0;
}
