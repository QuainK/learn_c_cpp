/**
* P5015 [NOIP2018 普及组] 标题统计
* https://www.luogu.com.cn/problem/P5015
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[6];
    fgets(s, 6, stdin);
    int count = 0;

    for (int i = 0; i < strlen(s); ++i) {
        // 判断每个字符的ASCII
        // 数字 0-9 48-57
        // 大写字母 A-Z 65-90
        // 小写字母 a-z 97-122
        if (48 <= s[i] && s[i] <= 57 || 65 <= s[i] && s[i] <= 90 || 97 <= s[i] && s[i] <= 122) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
