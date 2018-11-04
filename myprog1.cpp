#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(void)
{
	const int dir_err = system("mkdir dir1;	cd dir1; touch file10; cd ..; mkdir dir2; cd dir2; touch file20; cd ..; touch file1; ln -s file20 link1");
	
	if (-1 == dir_err)
	{
		printf("Error creating directories or files!n");
		exit(1);
	}

	return 0;
}
