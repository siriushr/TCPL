/* lower函数：convert c to lower case */

char lower(char c) {
	return c >= 'A' && c <= 'Z'? c + 'a' - 'A' : c;
}