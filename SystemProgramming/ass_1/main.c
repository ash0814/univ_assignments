#include <stdio.h>
#include <unistd.h>

void print_opt_list()
{
	printf("-p : \"Welcome Linux Programming!\"\n");
	printf("-n [argument] : \"Nice to meet [argument]\"\n");
	printf("-h : Print Option List\n");
}

int main(int argc, char **argv)
{
	int op;

	if (argc < 2)
		print_opt_list();
	op = getopt(argc, argv, "phn:");
	switch(op)
	{
		case 'p':
			printf("Welcome Linux Programming!\n");
			break;
		case 'h':
			print_opt_list();
			break;
		case 'n':
			printf("Nice to meet %s\n", argv[2]);
			break;
		case '?':
			printf("Wrong Option\n");
			break;
	}
	return (0);
}
