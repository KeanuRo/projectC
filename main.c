#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_perimeter(int width, int height)
{
	return width * height;
}

int main()
{ 
	char buffer[4096];
	int width = atoi(fgets(buffer, sizeof(buffer), stdin));
	int length = atoi(fgets(buffer, sizeof(buffer), stdin));
	int perimeter = get_perimeter(width, length);
	printf("Width = %d, length = %d, perimeter = %d\r\n", width, length, perimeter);
	return 0;
}
