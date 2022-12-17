#include <stdio.h>
int main()
{
	char str[50]="Hi welcome to miet";

	// character extraction
    printf("Extracting the substring from index 0 up to index 10:-");{
	for (int i = 0; i<=10; i++) {
		if (str[i] != ' ') {

			printf("%c", str[i]);
		}
	}
	}
	printf("\n\n");
	printf("Extracting the substring from index -3 up to index 4:-");{
	for (int i = -3; i<=4; i++) {
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
	}
	printf("\n\n");
	 printf("Extracting the substring from index 10 up to index 20:-");{
	for (int i = 10; i<=20; i++){
		if (str[i] != ' ') {
			printf("%c", str[i]);
		}
	}
	 }
	 printf("\n\n");
	return 0;
}
