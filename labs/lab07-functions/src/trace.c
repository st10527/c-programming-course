/**
 * Lab 07 Part 2: 函式追蹤
 * 
 * 請在 trace_answers.md 中追蹤這段程式碼的執行過程。
 * 不要執行程式！用手追蹤。
 */

#include <stdio.h>

int add(int a, int b) {
    printf("  add: a=%d, b=%d\n", a, b);
    return a + b;
}

int multiply(int x, int y) {
    printf("  multiply: x=%d, y=%d\n", x, y);
    int result = 0;
    for (int i = 0; i < y; i++) {
        result = add(result, x);
    }
    return result;
}

int compute(int n) {
    printf("compute: n=%d\n", n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int sq = multiply(i, i);
        sum = add(sum, sq);
    }
    return sum;
}

int main() {
    int result = compute(3);
    printf("result = %d\n", result);
    return 0;
}
