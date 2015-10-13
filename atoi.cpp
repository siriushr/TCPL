#include <string.h>
/* atoi函数：顾名思义，把字符串转换成数字 */

int atoi(char s[]) {
	int i, sum = 0;

	for (i = 0; i < strlen(s); i++) {
		sum = sum * 10 + s[i];
	}

	return sum;
}