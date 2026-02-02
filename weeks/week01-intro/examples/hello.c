/**
 * hello.c - 第一個 C 程式
 * 
 * 這是一個最簡單的 C 程式，用來測試開發環境是否正常。
 * 
 * 編譯方式：gcc hello.c -o hello
 * 執行方式：./hello
 */

#include <stdio.h>  // 引入標準輸入輸出函式庫

int main() {
    // printf 用來輸出文字到螢幕
    // \n 是換行字元
    printf("Hello, World!\n");
    
    // return 0 表示程式正常結束
    return 0;
}
