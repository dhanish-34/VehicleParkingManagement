#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int login()
{
	char uname[20],pass[20];int i,count=4;
	
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
 	printf("\t\t\xdb       =============================           \xdb\n");
 	printf("\t\t\xdb         VEHICLE PARKING MANAGEMENT            \xdb\n");
 	printf("\t\t\xdb       =============================           \xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
 	printf("\t\t\xdb              Brought To You By                \xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb                XYZ COMPANY                    \xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
 	printf("\t\t\xdb              (A DUBAI COMPANY)                \xdb\n");
 	printf("\t\t\xdb                                               \xdb\n");
 	printf("\t\t\xdb      CONTACT US:98765432100,0610423280        \xdb\n");
 	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf("\n\t\tusername : ");
	gets(uname);
	printf("\n\t\tpassword : ");
	gets(pass);
	if((strcmp(uname,"admin1")==0 && strcmp(pass,"kkmk")==0 )||(strcmp(uname,"admin2")==0 && strcmp(pass,"kkmk")==0) )
	{
		printf("\n\t\tlogin sucessful\n ");
		sleep(2);
		system("cls");
		return 0;
	}
	else
	{
		printf("\n\t\tusername or password is incorrect");
		while(count)
		{
			printf("\n \t\tRemaining attempts --> %d\n\n",count);
			printf("\n\t\tusername : ");
			gets(uname);
			printf("\n\t\tpassword : ");
			gets(pass);
			if((strcmp(uname,"admin1")==0 && strcmp(pass,"kkmk")==0 )||(strcmp(uname,"admin2")==0 && strcmp(pass,"kkmk")==0) )
			{
				printf("\n\t\tlogin sucessful\n ");
				sleep(2);
				system("cls");
				return 0;
			}
			count--;
		}
	system("cls");
	printf("\n\n\t\tlimit exceeded.Access denied\n\n");
	exit(0);
	}
}


