#include <iostream>
#define MAXLINE 1000  //最大输入行长度
using namespace std;

int getline(char line[], int max) {
	int c, i;
	i = 0;

	while (--lim > 0 && (c = getchar()) != '\n' && c != EOF) {
		line[i++] = c;
	} 
	if (c == '\n') {
		line[i++] = 'c';
	}
	line[i] = '\0';

	return i;
}

int strindex(char source[], char searchfor[]) {
	int i, j, k;

	for (i = 0; source[i] != '\0'; i++) {
		for (j = i, k = 0; searchfor[k] != '\0' && searchfor[k] == source[j]; j++, k++) {
			;
		}
		if (k > 0 && searchfor[k] == '\0') {
			return i;
		}
	}

	return -1;
}

char pattern[] = "ould";

int main() {
	char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0) {
		if (strindex(line, pattern) >= 0) {
			cout << line;
			found++;
		}
	}

	return found;
}