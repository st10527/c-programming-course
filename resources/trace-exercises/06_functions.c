/**
 * 程式追蹤練習 06：函式追蹤
 * 難度：⭐⭐
 * 
 * 練習方式：
 * 1. 追蹤函式的呼叫過程
 * 2. 注意「傳值呼叫」的特性
 * 3. 畫出 Call Stack 的變化
 * 4. 預測輸出，再執行驗證
 */

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int square(int x) {
    return x * x;
}

int double_it(int n) {
    return n * 2;
}

void try_change(int x) {
    x = 100;
    printf("函式內: x=%d\n", x);
}

int mystery(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}

int step(int n) {
    n = n + 1;
    n = n * 2;
    return n;
}

int main() {
    printf("=== 題目 1：基本函式呼叫 ===\n");
    {
        int result = add(3, 4);
        printf("result = %d\n", result);
    }
    
    printf("\n=== 題目 2：巢狀函式呼叫 ===\n");
    {
        int result = add(square(3), double_it(4));
        printf("result = %d\n", result);
    }
    
    printf("\n=== 題目 3：傳值呼叫 ===\n");
    {
        int x = 42;
        printf("呼叫前: x=%d\n", x);
        try_change(x);
        printf("呼叫後: x=%d\n", x);
    }
    
    printf("\n=== 題目 4：mystery 函式 ===\n");
    {
        printf("mystery(10, 3) = %d\n", mystery(10, 3));
        printf("mystery(3, 10) = %d\n", mystery(3, 10));
        printf("mystery(5, 5) = %d\n", mystery(5, 5));
    }
    
    printf("\n=== 題目 5：連續呼叫 ===\n");
    {
        int x = 3;
        x = step(x);
        printf("第一次: x=%d\n", x);
        x = step(x);
        printf("第二次: x=%d\n", x);
        x = step(x);
        printf("第三次: x=%d\n", x);
    }
    
    printf("\n=== 題目 6：表達式中的函式 ===\n");
    {
        int a = 2, b = 3;
        int r = square(a) + square(b);
        printf("r = %d\n", r);
        
        r = square(add(a, b));
        printf("r = %d\n", r);
    }
    
    return 0;
}

/*
 * ========================================
 * 解答（先自己追蹤，再看答案！）
 * ========================================
 *
 * 題目 1：
 * add(3, 4) → 3 + 4 = 7
 * 輸出：result = 7
 *
 * 題目 2：
 * 先計算參數：
 *   square(3) → 3*3 = 9
 *   double_it(4) → 4*2 = 8
 * 再呼叫 add(9, 8) → 9+8 = 17
 * 輸出：result = 17
 *
 * 題目 3：
 * x = 42
 * try_change(42)：函式收到的是「複製品」
 *   函式內 x 改為 100
 * 但 main 的 x 不受影響！
 * 輸出：
 * 呼叫前: x=42
 * 函式內: x=100
 * 呼叫後: x=42
 *
 * 題目 4：
 * mystery 計算的是兩數之差的絕對值
 * mystery(10, 3) → 10>3 → 10-3 = 7
 * mystery(3, 10) → 3<10 → 10-3 = 7
 * mystery(5, 5) → 5=5 → 5-5 = 0
 * 輸出：
 * mystery(10, 3) = 7
 * mystery(3, 10) = 7
 * mystery(5, 5) = 0
 *
 * 題目 5 追蹤表：
 * step(n): n+1 再 *2
 * | 呼叫 | 輸入 | n+1 | *2 | 回傳 |
 * |------|------|-----|-----|------|
 * | 第1次 | 3 | 4 | 8 | 8 |
 * | 第2次 | 8 | 9 | 18 | 18 |
 * | 第3次 | 18 | 19 | 38 | 38 |
 * 輸出：
 * 第一次: x=8
 * 第二次: x=18
 * 第三次: x=38
 *
 * 題目 6：
 * a=2, b=3
 * square(2) + square(3) = 4 + 9 = 13
 * square(add(2,3)) = square(5) = 25
 * 輸出：
 * r = 13
 * r = 25
 */
