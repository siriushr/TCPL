#include <iostream>
#include <ctype.h>
using namespace std;

#define MAXLINE 100

double my_atof(char s[]);
int getline(char line[], int max);

int main () {
    double sum = 0.0;
    char line[MAXLINE];
    
    while (getline(line, MAXLINE) > 0) {
        sum += atof(line);
        cout << sum << endl;
    }
    return 0;
}

double my_atof(char s[]) {
    double val, power;
    int i, sign;
    
    for (i = 0; isspace(s[i]); i++) { //跳过空白符
        ;
    }
    sign = (s[i] == '-') ? -1 : 1; //记录符号
    
    if (s[i] == '+' || s[i] == '-') {
        i++;
    } //字符串中可能不带符号，可能带符号，所以要用这一步来跳过可能存在的符号
    
    for (val = 0.0; isdigit(s[i]); i++) {
        val = 10.0 * val + s[i] - '0';
    } //得到整数部分
    
    if (s[i] == '.') {
        i++;
    } //跳过小数点
    
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + s[i] - '0';
        power *= 10.0;
    } //得到小数部分，并且用power来记录小数点位置
    
    return sign * val / power;
}

int getline(char s[], int lim) {
    int c = 0, i;
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
