/**
 * Lab 01 Part 1: 修正編譯錯誤
 * 
 * 這個程式有幾個語法錯誤，請找出並修正它們。
 * 提示：仔細閱讀編譯器的錯誤訊息
 * 
 * 注意：不要改變程式的邏輯，只修正語法錯誤。
 */

#include <stdio.h>

int main() {
    // 錯誤 1：缺少某個東西
    printf("Welcome to C Programming!\n")
    
    // 錯誤 2：字串沒有正確結束
    printf("This is line 2\n);
    
    // 錯誤 3：變數宣告問題
    int number = 42
    printf("The number is: %d\n", number);
    
    // 錯誤 4：函式呼叫問題
    printf("End of program\n";
    
    return 0;
}

/*
 * 除錯提示：
 * 
 * 1. 先嘗試編譯，看錯誤訊息
 * 2. 錯誤訊息會告訴你問題在哪一行
 * 3. 有時候一個錯誤會導致多個錯誤訊息
 * 4. 建議一次修正一個錯誤，然後重新編譯
 */
