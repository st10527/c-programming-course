/**
 * 程式追蹤練習 09：指標追蹤
 * 難度：⭐⭐⭐
 * 
 * 練習方式：
 * 1. 畫出記憶體圖（變數、位址、值、箭頭）
 * 2. 分清楚「指標的值」和「指標指向的值」
 * 3. 追蹤每一步的記憶體變化
 * 4. 預測輸出，再執行驗證
 */

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void add_one(int *p) {
    *p = *p + 1;
}

int main() {
    printf("=== 題目 1：基本指標 ===\n");
    {
        int x = 10;
        int *p = &x;
        *p = 20;
        printf("x=%d, *p=%d\n", x, *p);
    }
    
    printf("\n=== 題目 2：兩個指標 ===\n");
    {
        int a = 5, b = 10;
        int *p = &a, *q = &b;
        *p = *q;
        printf("a=%d, b=%d\n", a, b);
    }
    
    printf("\n=== 題目 3：指標重新指向 ===\n");
    {
        int x = 10, y = 20;
        int *p = &x;
        printf("*p=%d\n", *p);
        p = &y;
        printf("*p=%d\n", *p);
        *p = 30;
        printf("x=%d, y=%d\n", x, y);
    }
    
    printf("\n=== 題目 4：swap ===\n");
    {
        int a = 3, b = 7;
        printf("交換前: a=%d, b=%d\n", a, b);
        swap(&a, &b);
        printf("交換後: a=%d, b=%d\n", a, b);
    }
    
    printf("\n=== 題目 5：指標與陣列 ===\n");
    {
        int arr[4] = {10, 20, 30, 40};
        int *p = arr;
        printf("%d\n", *p);
        printf("%d\n", *(p + 2));
        p++;
        printf("%d\n", *p);
        printf("%d\n", p[1]);
    }
    
    printf("\n=== 題目 6：連續修改 ===\n");
    {
        int x = 5;
        int *p = &x;
        add_one(p);
        add_one(&x);
        add_one(p);
        printf("x=%d\n", x);
    }
    
    printf("\n=== 題目 7：指標迷宮 ===\n");
    {
        int a = 1, b = 2, c = 3;
        int *p = &a;
        int *q = &b;
        
        *p = *q + *q;     // 步驟 1
        q = &c;            // 步驟 2
        *q = *p;           // 步驟 3
        p = q;             // 步驟 4
        *p = *p + 1;       // 步驟 5
        
        printf("a=%d, b=%d, c=%d\n", a, b, c);
    }
    
    return 0;
}

/*
 * ========================================
 * 解答（先自己追蹤，再看答案！）
 * ========================================
 *
 * 題目 1：
 * x = 10, p → x
 * *p = 20 → x 變成 20
 * 輸出：x=20, *p=20
 *
 * 題目 2：
 * a = 5, b = 10, p → a, q → b
 * *p = *q → a = b 的值 = 10
 * 注意：b 沒有改變！只是 a 變成了 10
 * 輸出：a=10, b=10
 *
 * 題目 3 追蹤：
 * x=10, y=20, p → x
 * *p = 10
 * p = &y → p 改指向 y
 * *p = 20
 * *p = 30 → y 改為 30（x 沒變）
 * 輸出：
 * *p=10
 * *p=20
 * x=10, y=30
 *
 * 題目 4：
 * swap 用指標交換 a 和 b 的值
 * 輸出：
 * 交換前: a=3, b=7
 * 交換後: a=7, b=3
 *
 * 題目 5 追蹤：
 * arr = {10, 20, 30, 40}, p → arr[0]
 * *p = 10 (arr[0])
 * *(p+2) = 30 (arr[2])
 * p++ → p 指向 arr[1]
 * *p = 20 (arr[1])
 * p[1] = *(p+1) = 30 (arr[2])
 * 輸出：
 * 10
 * 30
 * 20
 * 30
 *
 * 題目 6：
 * x=5, p → x
 * add_one(p): x 變 6
 * add_one(&x): x 變 7
 * add_one(p): x 變 8
 * （三次都是修改同一個 x）
 * 輸出：x=8
 *
 * 題目 7 追蹤表：
 * | 步驟 | a | b | c | p→ | q→ |
 * |------|---|---|---|-----|-----|
 * | 初始 | 1 | 2 | 3 | a | b |
 * | *p=*q+*q | 4 | 2 | 3 | a | b | (a = b+b = 4)
 * | q=&c | 4 | 2 | 3 | a | c | (q 改指向 c)
 * | *q=*p | 4 | 2 | 4 | a | c | (c = a = 4)
 * | p=q | 4 | 2 | 4 | c | c | (p 也指向 c)
 * | *p=*p+1 | 4 | 2 | 5 | c | c | (c = c+1 = 5)
 * 輸出：a=4, b=2, c=5
 */
