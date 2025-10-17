#include <stdio.h>
#include <stdlib.h>

int num_isla();

int main(int argc, char *argv[])
{
	/* read in grid from file and init m x n
	 * call function to get num of islands
	 * print result
	 */
	int i, j, m, n, *nums, **grid;
	int first_line, nmpty;
	char c;
	FILE *fptr;
	m = 0;
	n = 0;
	first_line = 1;
	nmpty = 0;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return EXIT_FAILURE;
	}

	if ((fptr = fopen(argv[1], "r")) == NULL ) {
		fprintf(stderr, "ERROR: Unable to open file: \"%s\"\n", argv[1]);
		return EXIT_FAILURE;
	}
	i = 0;
	j = 0;
	/* get m x n dimensions (only need to count columns once) */
	while ((c = getc(fptr)) != EOF) {
		if (c == '1' || c == '0') {
			if (first_line) j++;
			nmpty = 1;
		} else if (c == '\n') {
			if (nmpty) i++;
			nmpty = 0;
			first_line = 0;
		}
	}
	/* in case last line doesn't end with newline */
	if (nmpty) i++;
	m = i;
	n = j;
	rewind(fptr);

	/* allocate memory for numbers and array of pointers(grid) */
	if ((nums = malloc(m * n * sizeof(int))) == NULL) {
		fprintf(stderr, "ERROR: Memory allocation failure.\n");
		return EXIT_FAILURE;
	}
	if ((grid = malloc(m * sizeof(int *))) == NULL) {
		fprintf(stderr, "ERROR: Memory allocation failure.\n");
		free(nums);
		return EXIT_FAILURE;
	}

	/* setup pointers to point at start of each row */
	for (i = 0; i < m; i++) {
		grid[i] = nums + (i * n);
	}

	printf("m: %d n: %d\n", m, n);
	/* read in grid */
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (fscanf(fptr, "%d", &grid[i][j]) != 1) {
				fprintf(stderr, "ERROR: Invalid grid data.\n");
				free(nums);
				free(grid);
				fclose(fptr);
				return EXIT_FAILURE;
			}
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}

	/* cleanup */
	free(nums);
	free(grid);
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
