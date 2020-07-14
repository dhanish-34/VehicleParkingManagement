#include<math.h>
#include <time.h>
#include <stdio.h>
#include<string.h>
double totalfare1;
charges(char a,char b,char c,char d,char in[15])
{
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    printf("Current Time : %s\n", time_str);
printf("TIME --->\t%c%c : %c%c\n\n",time_str[11],time_str[12],time_str[14],time_str[15]);


int fare = 20;
char str[5];
str[0]=a;str[1]=b;str[2]=c;str[3]=d;
int  starthour=(time_str[11]-48 )*10 + (time_str[12]-48);
int  endhour=(str[0]-48 )*10 + (str[1]-48);
printf(" %d hours ",starthour-endhour);
int  startmin=(time_str[14]-48 )*10 + (time_str[15]-48);
int  endmin=(str[2]-48 )*10 + (str[3]-48);
printf("%d mins",startmin-endmin);
int totmins=(starthour-endhour)*60+(startmin-endmin);
printf("%d tot mins",totmins);
double totalfare=(ceil)((double)totmins*((double)fare/60));
printf("\n\nTotal fare -----> %lf",totalfare);
char farestring[10];
sprintf(farestring,"%lf",totalfare);

//gcvt(totalfare,6,farestring);
FILE * fptr;  
    fptr = fopen("payment.txt", "a");
  fputs(in,fptr);fputs("   ",fptr);
fputs(time_str,fptr);fputs("   ",fptr);
fprintf(fptr,farestring);fputs("   ",fptr);

/*if(type[token][0]==1)
fputs("Car",fptr);
if(type[token][0]==2)
fputs("Bike",fptr);*/
fputs("\n",fptr);  
fclose(fptr);
totalfare1=totalfare1+totalfare;
    return 0;
}
totalva()
{
printf("%f",totalfare1);
}
