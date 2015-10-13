/* strindex函数：返回字符串t在字符串s中的位置，若未找到则返回-1 */
#include <string>
int strrindex(char s[], char t[]) {
	int i, j, k;

	for (i = strlen(s) - strlen(t); i >= 0; i--) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] = '\0')
			return i;
	}

	return -1;
}