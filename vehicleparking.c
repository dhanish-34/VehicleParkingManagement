#include<stdio.h>
#include<string.h>
#include<time.h>
#include "allocate.c"
#include "timecalc.c"
#include "displayfile.c"
#include "loginpage.c"
char str[5];
int type[200][2];
char intime[200][15];
char regno[200][15];

void main()
{  
	int selection; int token=1,tok;  int tokr,typ;
 	login();
 	pattern();
	printf("\t\tSelect\n\n\t\t\t1.Entry\n\n\t\t\t2.Exit\n\n\t\t\t3.Display\n\n\t\t\t4.Quit\n\n\t\tOption ---->\t");
 	scanf("%d",&selection);
	do
	{
		switch(selection)
		{
			case 1: tok=entry(token);token=tok;//printf("%d %d",tok-1,type[tok-1][0]); 
					alloc(tok-1,type[tok-1][0]);
					break;
			case 2: printf("\nEnter the token no ---->\t"); scanf("%d",&tokr);
          			printf("\n\nEnter type ---->\t");scanf("%d",&typ);  dealloc(tokr,typ);
         			charges(intime[tokr][0],intime[tokr][1],intime[tokr][2],intime[tokr][3],regno[tokr]);
	           		break; 
			case 3: displ(tok);
					break;
			case 4: break;
			default:printf("Not valid");
		} 
		if(selection!=4)
		{	
			sleep(5);
			system("cls");
			pattern();
			printf("\t\tSelect\n\n\t\t\t1.Entry\n\n\t\t\t2.Exit\n\n\t\t\t3.Display\n\n\t\t\t4.Quit\n\n\t\tOption ---->\t");
			scanf("%d",&selection);
		}
	}while(selection!=4);
}


int entry(int token)
{	
	//char regno[200][15];
	//int type[200][2];
	system("cls");
	pattern();
	printf("\n\nEnter the Registration no ----->\t");
	scanf("%s",regno[token]);
	time_t mytime = time(NULL);
	char * starttime = ctime(&mytime);
	starttime[strlen(starttime)-1] = '\0';
	//strcpy(time_str,intime);
	printf("\nEnter the vehicle type 1-Car 2-Bike: ----->\t");
	scanf("%d",&type[token][0]);
	intime[token][0]=starttime[11];
	intime[token][1]=starttime[12];
	intime[token][2]=starttime[14];
	intime[token][3]=starttime[15];
//	printf("%c%c:%c%c ",intime[token][0],intime[token][1],intime[token][2],intime[token][3]);
	FILE * fptr;  
    fptr = fopen("boot.txt", "a");
  	fputs(regno[token],fptr);fputs("   ",fptr);
	fputs(starttime,fptr);fputs("   ",fptr);
	if(type[token][0]==1)
		fputs("Car",fptr);
	if(type[token][0]==2)
		fputs("Bike",fptr);
		fputs("\n",fptr);  
		fclose(fptr);
	//fputs(token,fptr);fputs("\n",fptr); 
	token++;// printf("%d",token);
	return token;
}

pattern()
{
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
 	printf("\t\t\xdb       =============================           \xdb\n");
 	printf("\t\t\xdb        WELCOME TO VGK CAR SHOWROOM            \xdb\n");
 	printf("\t\t\xdb       =============================           \xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
 	printf("\t\t\xdb                COIMBATORE                     \xdb\n");
 	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	
}
