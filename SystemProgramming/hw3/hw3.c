#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char **argv)
{
	FILE *fp;

	if (argc != 2) {
		fprintf(stderr, "Only 1 argument please!\n");
		return (1);
	}
	if ((fp = fopen(argv[1], "r")) == NULL) {
		perror("Failed to open!");
		return (1);
	}
	long buf;
	char *stime;
	fscanf(fp, "%ld", &buf);
	stime = ctime(&buf);
	printf("%s", stime);
	return (0);
}
