#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	struct stat fileStat;
	int fd = 0;
	fd = open(argv[0], O_RDONLY);
	if (fd == -1) {
		perror("Failed to open the file");
		exit(1);
	}
	printf("The fd of hw2.c is %d\n", fd);	
    if(fstat(fd, &fileStat)<0)
		return 1;
	printf("The inode number of hw2.c is %llu\n", fileStat.st_ino);
	close(fd);
    return 0;
}
