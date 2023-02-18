#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main() {

	///////https://github.com/portfoliocourses/c-example-code/blob/main/strcpy_strncpy.c///////
	// source string
	char src[10] = "123456789";

	// strncpy allows to copy a specified number of characters with a 3rd argument	
	// in this case we copy all 10 characters from src to dest3
	char dest3[50];
	int num3 = strlcpy(dest3, src, 10);
	printf("dest3: %s\n", dest3);
	printf("dest3_size: %d\n", num3);
	//// test ft_strlcpy ///////
	int number_ft1 = ft_strlcpy(dest3, src, 10);
	printf("dest3_ft_size: %d\n", number_ft1);
	printf("dest3_ft: %s\n", dest3);
	////////////////////

	// as with strcpy, if the destination character array is too small to hold 
	// the source string we can expect an error at runtime
	//char dest4[5];
	// strncpy(dest4, src, 10);

	// if the number of characters to copy is larger than the number of characters
	// in the source string, this is actually OK, the string will copy and to 
	// the destination characater array and extra characters beyond the length 
	// of the string will be set to the null terminator
	char dest5[50];
	strncpy(dest5, src, 40);
	printf("dest5: %s\n", dest5);

	// If we only copy 2 characters from this source string, the null terminator 
	// will not be copied over (as it is in the 10th position of the source 
	// string), and the "string" in destination will not be a proper string as 
	// it will not necessarily be null terminated this way.  If we try to 
	// print out the string, or use strlen() for example, we may get unexpected
	// results as it is not a proper string.  strncpy() will not automatically 
	// insert a null terminator for us in this situation, we need to manually 
	// insert the null terminator to properly terminate the string as done below.
	char dest6[5];
	strncpy(dest6, src, 2);
	//dest6[2] = '\0';
	printf("dest6: %s\n", dest6);


	int number = strlcpy(dest6, src, 2);
	//dest6[2] = '\0';
	printf("dest6_size: %d\n", number);
	printf("dest6: %s\n", dest6);

	//// test ft_strlcpy ///////
	int number_ft = ft_strlcpy(dest6, src, 2);
	//dest6[2] = '\0';
	printf("dest6_ft_size: %d\n", number_ft);
	printf("dest6_ft: %s\n", dest6);
	////////////////////

	return 0;
}