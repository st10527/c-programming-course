/**
 * Lab 10 Part 1: 字串操作
 */

#include <stdio.h>
#include <string.h>

int main() {
    // ========================================
    // 練習 1：字串基本操作
    // ========================================
    printf("=== 練習 1：字串基本操作 ===\n");
    
    char name[50];
    char greeting[100];
    
    // TODO: 使用 strcpy 將 "Alice" 複製到 name
    
    
    // TODO: 使用 strcpy 將 "Hello, " 複製到 greeting
    
    
    // TODO: 使用 strcat 將 name 接到 greeting 後面
    
    
    // TODO: 使用 strcat 將 "!" 接到 greeting 後面
    
    
    printf("name: %s\n", name);         // 預期：Alice
    printf("greeting: %s\n", greeting); // 預期：Hello, Alice!
    printf("name 長度: %lu\n", strlen(name));       // 預期：5
    printf("greeting 長度: %lu\n", strlen(greeting)); // 預期：13
    
    // ========================================
    // 練習 2：字串比較
    // ========================================
    printf("\n=== 練習 2：字串比較 ===\n");
    
    char passwords[][20] = {"admin", "user123", "pass"};
    char input[] = "user123";
    int found = 0;
    
    // TODO: 用迴圈和 strcmp 檢查 input 是否在 passwords 中
    // 如果找到，印出 "密碼正確！" 並設 found = 1
    
    
    if (!found) {
        printf("密碼不正確！\n");
    }
    // 預期輸出：密碼正確！
    
    // ========================================
    // 練習 3：字元統計
    // ========================================
    printf("\n=== 練習 3：字元統計 ===\n");
    
    char sentence[] = "Hello World, this is C Programming!";
    int upper_count = 0;  // 大寫字母數量
    int lower_count = 0;  // 小寫字母數量
    int space_count = 0;  // 空格數量
    int other_count = 0;  // 其他字元數量
    
    // TODO: 走訪 sentence，統計各類字元數量
    // 提示：大寫 'A'-'Z'，小寫 'a'-'z'，空格 ' '
    
    
    printf("大寫: %d\n", upper_count);  // 預期：4 (H, W, C, P)
    printf("小寫: %d\n", lower_count);  // 預期：23
    printf("空格: %d\n", space_count);  // 預期：5
    printf("其他: %d\n", other_count);  // 預期：2 (, !)
    
    // ========================================
    // 練習 4：大小寫轉換
    // ========================================
    printf("\n=== 練習 4：大小寫轉換 ===\n");
    
    char text[] = "Hello World";
    
    // TODO: 將 text 轉為全大寫（原地修改）
    // 提示：小寫轉大寫 → ch - 32 或 ch - ('a' - 'A')
    
    
    printf("全大寫: %s\n", text);  // 預期：HELLO WORLD
    
    // TODO: 再將 text 轉為全小寫（原地修改）
    
    
    printf("全小寫: %s\n", text);  // 預期：hello world
    
    return 0;
}
