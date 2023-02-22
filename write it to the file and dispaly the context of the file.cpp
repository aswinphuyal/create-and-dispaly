#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[20],add[20],phone[20];
	
}s;
main()
{

 FILE *fp;
char=ch='y';
fp=fopen("rec.txt","w");
while(cn!='n')
{
	printf("enter the roll of student");
	scanf("%d",&s.roll);
	printf("enter the name of student");
	scanf("%s",&s.name);
	printf("enter address of student");
	scanf("%s",&s.add);
	printf("enter the phone numbe");
	scanf("%s",&s.phone);
	fprintf(fp,"%d\t%s\n%s\n%s\n",s.roll,s.name,s.add,s.phone);
	printf("do you want to add more record(y-yes/n-bo)");
	ch=getch();
	
}
fclose(fp);
fp=fopen("rec.txt","c");
while((fscanf(fp,"%d\t%s\n%s\n%s\n",&s.roll,s.name,s.add,s.phone))!=EOF);
{
	printf("%d\t%s\n%s\n%s\n",s.roll,s.name,s.add,s.phone);
	
}
fclose(fp);
getch();
