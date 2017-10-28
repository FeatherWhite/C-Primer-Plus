#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void)
{
	FILE *fp;
	char words[MAX];
	int wordct = 0;
	if ((fp = fopen("wordy.txt", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"words\" file.\n");
		exit(1);
	}
	/*rewind(fp);*/
	while (fgets(words, MAX - 1, fp) != NULL)
		wordct++;
	rewind(fp);
	puts("Enter words to add to the file. Enter one word per line, and ");
	puts("press the Enter key at the beginning of a line to terminate.");
	while (gets(words) != NULL && words[0] != '\0')
		fprintf(fp, "%d: %s\n", ++wordct, words);
	puts("File contents:");
	rewind(fp); /* go back to beginning of file */
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	return 0;
}