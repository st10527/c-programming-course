/**
 * pointers.c - 指標基礎示範
 * 
 * 編譯：gcc pointers.c -o pointers
 * 執行：./pointers
 */

#include <stdio.h>

int main() {
    // ============================================================
    // 指標的宣告與使用
    // ============================================================
    
    printf("=== 指標基礎 ===\n");
    
    int x = 42;
    int *ptr = &x;  // ptr 指向 x
    
    printf("x 的值:      %d\n", x);
    printf("x 的位址:    %p\n", (void*)&x);
    printf("ptr 的值:    %p (儲存的是 x 的位址)\n", (void*)ptr);
    printf("*ptr 的值:   %d (透過指標取得 x 的值)\n", *ptr);
    printf("ptr 的位址:  %p (ptr 自己的位址)\n", (void*)&ptr);
    printf("\n");
    
    // ============================================================
    // 透過指標修改值
    // ============================================================
    
    printf("=== 透過指標修改值 ===\n");
    
    printf("修改前: x = %d\n", x);
    *ptr = 100;  // 透過 ptr 修改 x
    printf("*ptr = 100 後: x = %d\n", x);
    printf("x 和 *ptr 永遠是同一個值！\n\n");
    
    // ============================================================
    // 不同型態的指標
    // ============================================================
    
    printf("=== 不同型態的指標 ===\n");
    
    int i = 10;
    double d = 3.14;
    char c = 'A';
    
    int *ip = &i;
    double *dp = &d;
    char *cp = &c;
    
    printf("int 指標:    *ip = %d\n", *ip);
    printf("double 指標: *dp = %f\n", *dp);
    printf("char 指標:   *cp = %c\n", *cp);
    printf("\n");
    
    // 指標本身的大小（和型態無關，都是位址大小）
    printf("sizeof(int*) = %lu\n", sizeof(int*));
    printf("sizeof(double*) = %lu\n", sizeof(double*));
    printf("sizeof(char*) = %lu\n", sizeof(char*));
    printf("（指標大小和型態無關，都是位址大小）\n\n");
    
    // ============================================================
    // & 和 * 是互逆操作
    // ============================================================
    
    printf("=== & 和 * 互逆 ===\n");
    
    int val = 7;
    int *p = &val;
    
    printf("val = %d\n", val);
    printf("*(&val) = %d (先取址再解參考 → 原值)\n", *(&val));
    printf("&(*p) = %p (先解參考再取址 → 原位址)\n", (void*)&(*p));
    printf("&val = %p\n", (void*)&val);
    printf("\n");
    
    // ============================================================
    // 多個指標指向同一個變數
    // ============================================================
    
    printf("=== 多個指標指向同一變數 ===\n");
    
    int num = 50;
    int *p1 = &num;
    int *p2 = &num;
    
    printf("num = %d, *p1 = %d, *p2 = %d\n", num, *p1, *p2);
    
    *p1 = 75;  // 透過 p1 修改
    printf("*p1 = 75 後:\n");
    printf("num = %d, *p1 = %d, *p2 = %d\n", num, *p1, *p2);
    printf("三者都是 75，因為都指向同一個位置\n\n");
    
    // ============================================================
    // NULL 指標
    // ============================================================
    
    printf("=== NULL 指標 ===\n");
    
    int *null_ptr = NULL;  // 不指向任何東西
    
    printf("null_ptr = %p\n", (void*)null_ptr);
    
    // 使用前要檢查
    if (null_ptr != NULL) {
        printf("*null_ptr = %d\n", *null_ptr);
    } else {
        printf("null_ptr 是 NULL，不能解參考！\n");
    }
    
    return 0;
}
