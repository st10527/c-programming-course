/**
 * 程式追蹤練習 03：條件判斷追蹤
 * 難度：⭐⭐
 * 
 * 練習方式：
 * 1. 先判斷每個條件的真假
 * 2. 追蹤會進入哪個分支
 * 3. 預測最終輸出
 * 4. 執行程式驗證
 */

#include <stdio.h>

int main() {
    printf("=== 題目 1：基本 if-else ===\n");
    {
        int x = 15;
        if (x > 20) {
            printf("A\n");
        } else if (x > 10) {
            printf("B\n");
        } else if (x > 5) {
            printf("C\n");
        } else {
            printf("D\n");
        }
    }
    
    printf("\n=== 題目 2：巢狀 if ===\n");
    {
        int a = 10, b = 20;
        if (a > 5) {
            if (b > 15) {
                printf("X\n");
            } else {
                printf("Y\n");
            }
        } else {
            printf("Z\n");
        }
    }
    
    printf("\n=== 題目 3：switch ===\n");
    {
        int grade = 85;
        switch (grade / 10) {
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            default:
                printf("F\n");
        }
    }
    
    printf("\n=== 題目 4：switch fall-through ===\n");
    {
        int x = 2;
        switch (x) {
            case 1:
                printf("one ");
            case 2:
                printf("two ");
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
        }
        printf("\n");
    }
    
    printf("\n=== 題目 5：複合條件 ===\n");
    {
        int age = 25;
        int income = 30000;
        
        if (age >= 18 && age <= 30 && income > 20000) {
            printf("符合條件 A\n");
        }
        if (age < 18 || income < 10000) {
            printf("符合條件 B\n");
        }
        if (!(age > 30)) {
            printf("符合條件 C\n");
        }
    }
    
    printf("\n=== 題目 6：三元運算子 ===\n");
    {
        int a = 10, b = 20;
        int max = (a > b) ? a : b;
        int min = (a < b) ? a : b;
        char *result = (a == b) ? "相等" : "不等";
        printf("max=%d, min=%d, %s\n", max, min, result);
    }
    
    printf("\n=== 題目 7：= 和 == 的陷阱 ===\n");
    {
        int x = 0;
        if (x = 5) {  // 注意：是 = 不是 ==
            printf("true (x=%d)\n", x);
        } else {
            printf("false (x=%d)\n", x);
        }
    }
    
    return 0;
}

/*
 * ========================================
 * 解答（先自己追蹤，再看答案！）
 * ========================================
 *
 * 題目 1：
 * x=15, 15>20? F → 15>10? T → 進入第二個分支
 * 輸出：B
 *
 * 題目 2：
 * a=10, 10>5? T → 進入外層 if
 * b=20, 20>15? T → 進入內層 if
 * 輸出：X
 *
 * 題目 3：
 * grade=85, 85/10=8
 * switch(8) → case 8 → 印出 B → break
 * 輸出：B
 *
 * 題目 4：
 * x=2, switch(2) → case 2
 * 注意：case 2 和 case 3 之間沒有 break！
 * 所以會 fall-through 到 case 3
 * 印出 "two " 接著印出 "three "，然後 break
 * 輸出：two three
 *
 * 題目 5：
 * age=25, income=30000
 * 條件 A：25>=18 T && 25<=30 T && 30000>20000 T → 全部 T → 印出
 * 條件 B：25<18 F || 30000<10000 F → 全部 F → 不印
 * 條件 C：!(25>30) = !(F) = T → 印出
 * 輸出：符合條件 A
 *       符合條件 C
 *
 * 題目 6：
 * a=10, b=20
 * max = (10>20)? → false → b = 20
 * min = (10<20)? → true → a = 10
 * result = (10==20)? → false → "不等"
 * 輸出：max=20, min=10, 不等
 *
 * 題目 7：
 * x = 5（注意是賦值，不是比較！）
 * if(5) → 非零就是 true
 * 輸出：true (x=5)
 * 重點：= 是賦值，== 才是比較！這是常見的 bug！
 */
