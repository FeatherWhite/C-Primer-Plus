#include <stdio.h>
#include <ctype.h>

struct names//1   要注意顺序
	{
		char name[20];
		char mname[20];
		char fname[20];
	};

struct persons
{
	int scsnum;//Social Security
	struct names title;
};//2

struct persons socsec[5] = {
		{302039823,{"Dribble","Mackede","Flossie"}},
		{345345345,{"gadenfs","Kasdfas","Pszajkh"}},
		{302039823,{"Kazsdfj","Aasdfaf","Mjasdfh"}},
		{302039823,{"Qaadsef","","Yjsjdsh"}},
		{302039823,{"Bsdsdfs","Fsjdsdd","Rshdsdf"}}
};//3

int main(void)
{
	int count;
	for (count = 0;count < 5;count++)
	{
	printf("%s,",socsec[count].title.name);
	printf("%s ",socsec[count].title.fname);
	if (isspace(socsec[count].title.mname[0]))
		continue;
	else
		printf("%c.",socsec[count].title.mname[0]);
		printf(" - %d\n",socsec[count].scsnum);
	}
	return 0;
}
