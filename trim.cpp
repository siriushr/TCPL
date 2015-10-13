/* trim函数：删除字符串尾部的空格符、制表符与换行符 */

int trim(char s[]) {
	int n;

	for (n = strlen(s) - 1; n >= 0; n--) {
		if (s[n] != ' ' && s[n] != '\n' && s[n] != '\t') 
			break;
	}
	s[n + 1] = '\0';
	return n;  //返回字符串的长度，不包括'\0'
}