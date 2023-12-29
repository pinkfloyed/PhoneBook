#include <stdio.h>
#include <stdlib.h>
int main()
{
    char n[100],na[100],add[100],addr[100];
    int a,p,d,ag,ph,da,x,y;
    printf("WELCOME TO PHONE BOOK\n\n");
    printf("MENU\n");
    printf("Press 1 to add the contact\n\n");

    printf("Enter\n\n");
    scanf("%d",&x);

    if(x==1)
	{
		printf("Enter the number of contacts to be added : ");
		scanf("%d",&y);
		if(y==1)
		{
			printf(".........................\n");
			printf("Name : ");
			scanf("%s", &n);
			printf("Age : ");
			scanf("%d", &a);
			printf("Phone Number : ");
			scanf("%d", &p);
			printf("Date of Birth : ");
			scanf("%d", &d);
			printf("Address : ");
			scanf("%s ", &add);
		}
		else if(y==2)
		{
			printf(".........................\n");
			printf("Name : ");
			scanf("%s", &n);
			printf("Age : ");
			scanf("%d", &a);
			printf("Phone Number : ");
			scanf("%d", &p);
			printf("Date of Birth : ");
			scanf("%d", &d);
			printf("Address : ");
			scanf("%s ", &add);
			printf(".........................\n");


			printf(".........................\n");
			printf("Name : ");
			scanf("%s", &na);
			printf("Age : ");
			scanf("%d", &ag);
			printf("Phone Number : ");
			scanf("%d", &ph);
			printf("Date of Birth : ");
			scanf("%d", &da);
			printf("Address : ");
			scanf("%s ",&addr);
			printf(".........................\n");
		}

		printf("Press 2 to view the entered contact\n\n");
		printf("Press 3 to exit the Phone Book\n\n");

		int z;
		printf("Enter\n\n");
		scanf("%d", &z);

		if(z==2)
		{
			int num;
			printf("Enter the number of contact to be viewed : ");
			scanf("%d",&num);

			if(num==1)
			{
				printf(".........................\n");
				printf("Name : ");
				printf("%s", n);
				printf("Age : ");
				printf("%d", a);
				printf("Phone Number : ");
				printf("%d", p);
				printf("Date of Birth : ");
				printf("%d", d);
				printf("Address : ");
				printf("%s ",add);
				printf(".........................\n");

			}
			else if(num==2)
			{
				printf(".........................\n");
				printf("Name : ");
				printf("%s", n);
				printf("Age : ");
				printf("%d", a);
				printf("Phone Number : ");
				printf("%d", p);
				printf("Date of Birth : ");
				printf("%d", d);
				printf("Address : ");
				printf("%s ",add);
				printf(".........................\n");

				printf(".........................\n");
				printf("Name : ");
				printf("%s", na);
				printf("Age : ");
				printf("%d", ag);
				printf("Phone Number : ");
				printf("%d", ph);
				printf("Date of Birth : ");
				printf("%d", da);
				printf("Address : ");
				printf("%s ",addr);
				printf(".........................\n");
			}
		}
		else if(z==3)
		{
			printf("Are you sure you want to close the Phone Book\n\n");
			printf("If YES ? ");
			printf("Press 1 for yes\n\n");
			printf("If NO ? ");
			printf("press 2 for No\n\n");

			int ans;
			printf("Enter\n\n");
			scanf("%d",&ans);

			if(ans==1)
			{
				printf("The Phone Book has been closed\n\n");
				printf("Have a good day\n\n");
			}
			else if(ans==2)
			{
				printf("The Phone Book has not closed\n\n");
				printf("You Can Continue........\n\n");
			}
		}
	}
    else
	{
		printf("INVALID!!!");
	}
    return 0;
}
