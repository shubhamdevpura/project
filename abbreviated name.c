#include <stdio.h>
#include<math.h>
int main()
{
    char fname[20], mname[20], lname[20];

     printf("Enter Name: " );
     scanf("%s %s %s", fname, mname, lname);
     
     printf("Abbreviated name:" );
     printf("%c. %c. %s\n", fname[0], mname[0], lname);
     
     return 0;
}
