//
// image cleaner - Written by Ted Burke, 8-10-2018
//

#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	uint8_t *p;
	FILE *fin, *fout;
	char line[1024], newlinechars;
	
	if (argc < 3)
	{
		fprintf(stderr, "Please specify input and output filenames\n");
		return 1;
	}
	
	fin = fopen(argv[1], "r");
	fout = fopen(argv[2], "w");
	
	int n=0;
	while(n<3)
	{
		fscanf(fin, " %[^\n\r]", line);
		if (line[0] == '#') continue;
	}
	
	fprintf(fout, "%s\n", line);
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
