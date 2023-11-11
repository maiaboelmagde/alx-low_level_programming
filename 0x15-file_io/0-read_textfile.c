#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it 
 * to the POSIX standard output.
 * @filename: the name of our file
 * 
 * @letters: number of letters to print.
*/
ssize_t read_textfile(const char *filename, size_t letters){
	int f;
	char *str;
	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	str = malloc(sizeof(char) * letters);
	if (f == -1 || str == NULL)
		return 0;
	else
		printf("%s\n","DONE");
	
}
