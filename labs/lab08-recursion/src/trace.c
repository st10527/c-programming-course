/**
 * Lab 08 Part 2: 遞迴追蹤
 * 
 * 請在 trace_answers.md 中追蹤這些遞迴函式的呼叫過程。
 * 不要執行程式！用手追蹤。
 */

#include <stdio.h>

// 函式 A：神秘遞迴
int mystery_a(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return mystery_a(n - 1) + mystery_a(n - 2);
}

// 函式 B：另一個神秘遞迴
int mystery_b(int n) {
    if (n < 10) return n;
    return mystery_b(n / 10) + (n % 10);
}

// 函式 C：互相呼叫的遞迴
int is_even(int n);
int is_odd(int n);

int is_even(int n) {
    if (n == 0) return 1;
    return is_odd(n - 1);
}

int is_odd(int n) {
    if (n == 0) return 0;
    return is_even(n - 1);
}

int main() {
    printf("mystery_a(5) = %d\n", mystery_a(5));
    printf("mystery_b(1234) = %d\n", mystery_b(1234));
    printf("is_even(4) = %d\n", is_even(4));
    printf("is_odd(3) = %d\n", is_odd(3));
    return 0;
}
