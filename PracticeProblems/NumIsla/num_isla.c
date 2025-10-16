#include <stdio.h>
#include <stdlib.h>

int num_isla();

int main(int argc, char *argv[])
{
	/* read in grid from file and init m x n
	 * call function to get num of islands
	 * print result
	 */
	int m, n, c, *grid;
	FILE *fptr, *fsize;

	if (argc != 2) {
		fprintf(stderr, "Usage: %c <filename>\n", argv[0]);
		return EXIT_FAILURE;
	}

	if ((fptr = fopen(argv[1], "r")) == NULL ) {
		fprintf(stderr, "Unable to open file: \"%s\"\n", argv[1]);
		return EXIT_FAILURE;
	}
	/* create a copy of the pointer to get m & n */
	fsize = fptr;
	while (fsize) {
		// TODO: count num of rows and cols
	}

	fclose(fptr);
	return EXIT_SUCCESS;
}

int num_isla()
{
	/* Algorithm:
	* - loop through grid
	* - if '1', then island
	* - use DFS to remove island, '1'->'0'
	* - continue
	*/

	int n = 0;

	return n;
}
