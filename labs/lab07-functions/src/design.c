/**
 * Lab 07 Part 3: 函式設計
 * 
 * 以下程式碼有很多重複。請將重複的邏輯提取成函式。
 */

#include <stdio.h>

int main() {
    // ========================================
    // 任務：以下三段程式碼都在做類似的事情
    // 請設計適當的函式，消除重複
    // ========================================
    
    // --- 計算 5 個數學成績的平均 ---
    int math[5] = {85, 92, 78, 95, 88};
    int math_sum = 0;
    for (int i = 0; i < 5; i++) {
        math_sum += math[i];
    }
    double math_avg = math_sum / 5.0;
    printf("數學平均: %.1f\n", math_avg);
    
    // --- 計算 5 個英文成績的平均 ---
    int english[5] = {70, 85, 90, 65, 80};
    int eng_sum = 0;
    for (int i = 0; i < 5; i++) {
        eng_sum += english[i];
    }
    double eng_avg = eng_sum / 5.0;
    printf("英文平均: %.1f\n", eng_avg);
    
    // --- 計算 5 個物理成績的平均 ---
    int physics[5] = {92, 88, 76, 84, 90};
    int phy_sum = 0;
    for (int i = 0; i < 5; i++) {
        phy_sum += physics[i];
    }
    double phy_avg = phy_sum / 5.0;
    printf("物理平均: %.1f\n", phy_avg);
    
    // ========================================
    // TODO: 重構上面的程式碼
    // 
    // 步驟 1：在 main 函式上方定義一個函式
    //   double calculate_average(int arr[], int size)
    //   功能：計算陣列的平均值
    //
    // 步驟 2：用你定義的函式取代上面的重複程式碼
    //   例如：double math_avg = calculate_average(math, 5);
    //
    // 步驟 3：確認輸出結果和原本一樣
    // ========================================
    
    return 0;
}
