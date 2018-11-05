#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main(void)
{
	mkdir("dir1", 0777 );
	
	creat("dir1/file10", 0777);
	
	mkdir("dir2", 0777);
	
	creat("dir2/file20", 0777);

	creat("file1", 0777);
	
	symlink("dir2/file20", "link1");

	return 0;

}
