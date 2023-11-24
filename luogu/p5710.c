#include <stdio.h>

/**
* 性质1是否成立
* @param x 输入的整数
* @return {int} 1成立，0不成立
*/
int prop1(int x) {
    return x % 2 == 0 ? 1 : 0;
}

/**
* 性质2是否成立
* @param x 输入的整数
* @return {int} 1成立，0不成立
*/
int prop2(int x) {
    return 4 < x && x <= 12 ? 1 : 0;
}

int func() {
    // 输入一个正整数
    int x;
    scanf("%d", &x);

    // 对这个数进行条件判断，成立则1，不成立则0
    // 小A 同时成立 逻辑与
    int a = prop1(x) && prop2(x) ? 1 : 0;
    // Uim 至少一个成立 逻辑或
    int uim = prop1(x) || prop2(x) ? 1 : 0;
    // 八尾 刚好一个 位异或
    int bawei = prop1(x) ^ prop2(x);
    // 正妹 两者都不 逻辑非+逻辑与
    int zhengmei = !prop1(x) && !prop2(x) ? 1 : 0;

    // 输出四个人是否喜欢的结果
    printf("%d %d %d %d\n", a, uim, bawei, zhengmei);
    return 0;
}

int main() {
    func();
    return 0;
}
