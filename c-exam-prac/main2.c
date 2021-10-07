#include <stdio.h>
int main()
{
	// s1 is the input string and s2 is the copied string
	char s1[1000], s2[1000];
	int i;
	printf("Input the string: ");
    scanf("%[^\n]s",s1);

	// Execute loop till null found
	for (i = 0; s1[i] != '\0'; ++i) {
		// copying the characters from s1 to s2
		
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	// printing the s2 string
	printf("String s2 : %s\n", s2);
	return 0;
}
