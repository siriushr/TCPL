/* getline函数：将行保存到s中，并返回该行的长度 */

#include <stdio.h>

int getline(char s[], int lim) {
	int c, i;
	i = 0;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	} 
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';

	return i;
}