#include <stdio.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char *t;
	if (argc != 2) {
		fprintf(stderr, "Only 1 argument please!\n");
		return (0);
	}
	// FILE *fp;
	// if ((fp = fopen(argv[1],O_RDWR) == -1)) {
	// 	fprintf(stderr, "Failed to open\n");
	// 	exit(1);
	// }
	t = ctime(time(NULL));
	printf("%s\n", t);
	return (0);
}
