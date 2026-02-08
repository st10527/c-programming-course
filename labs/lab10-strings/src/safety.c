/**
 * Lab 10 Part 2: 安全分析
 * 
 * 閱讀以下程式碼，在 safety_answers.md 中分析安全問題。
 * 不要執行這段程式碼！
 */

#include <stdio.h>
#include <string.h>

// ========================================
// 程式碼 A：使用者登入
// ========================================
void code_a() {
    char username[10];
    char password[10];
    
    printf("帳號: ");
    scanf("%s", username);
    printf("密碼: ");
    scanf("%s", password);
    
    if (strcmp(username, "admin") == 0 &&
        strcmp(password, "1234") == 0) {
        printf("登入成功！\n");
    }
}

// ========================================
// 程式碼 B：字串複製
// ========================================
void code_b() {
    char dest[5];
    char src[] = "This is a long string";
    
    strcpy(dest, src);
    printf("dest: %s\n", dest);
}

// ========================================
// 程式碼 C：讀取使用者輸入
// ========================================
void code_c() {
    char buffer[20];
    
    printf("請輸入姓名: ");
    gets(buffer);
    printf("你好, %s!\n", buffer);
}

// ========================================
// 程式碼 D：安全版本
// ========================================
void code_d() {
    char buffer[20];
    
    printf("請輸入姓名: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    // 移除換行符
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }
    
    printf("你好, %s!\n", buffer);
}

int main() {
    // 不需要執行，只需分析安全問題
    printf("請閱讀程式碼，在 safety_answers.md 中回答問題\n");
    return 0;
}
