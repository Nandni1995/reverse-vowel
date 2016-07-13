#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0;
char a[50],b[50],c;
clrscr();
printf("Enter the string:");
scanf("%s",a);
c=strrev(a);
printf("%s\n",c);
for(i=0;i<strlen(a);i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
a[i]=' ';
}
else
b[j++]=a[i];
}
a[i]='\0';
printf("without vowels %s",a);
getch();
}
