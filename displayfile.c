#include <stdio.h> 
#include <stdlib.h>   
displ(int token)
{ 
int n; 
system("cls");
printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
printf("\t\t\xdb                                               \xdb\n");
printf("\t\t\xdb       =============================           \xdb\n");
printf("\t\t\xdb        WELCOME TO VGK CAR SHOWROOM            \xdb\n");
printf("\t\t\xdb       =============================           \xdb\n");
printf("\t\t\xdb                                               \xdb\n");
printf("\t\t\xdb                COIMBATORE                     \xdb\n");
printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
printf("\n\n\t\tSelect\n\n\t\t\t1.Total vehicle count\n\n\t\t\t2.Display boot log\n\n\t\t\t3.payment\n\n\t\tOption ---->\t");
scanf("%d",&n);
if(n==1)
{
	printf("\n\tTotal vehicles ---->\t%d",token-1);
}
if(n==2)
{
    FILE *fptr;   
    char c;    
    fptr = fopen("boot.txt", "r"); 
    c = fgetc(fptr); printf("\n\n");
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
    fclose(fptr); 
}
if(n==3)
{
FILE *fptr;
char c;
fptr = fopen("payment.txt", "r"); 
    c = fgetc(fptr); printf("\n\n");
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
    fclose(fptr); 
} 
   return 0; }

