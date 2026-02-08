/**
 * Lab 09 Part 3: 二維陣列練習
 */

#include <stdio.h>

#define ROWS 3
#define COLS 4

// ========================================
// 練習 1：印出矩陣
// ========================================

// TODO: 完成函式 print_matrix
// 以整齊的格式印出二維陣列
void print_matrix(int matrix[ROWS][COLS]) {
    // 請在此完成
    // 提示：使用 printf("%4d", ...) 來對齊
}

// ========================================
// 練習 2：計算每一行的總和
// ========================================

// TODO: 完成函式 row_sums
// 計算每一行的總和，存入 sums 陣列
void row_sums(int matrix[ROWS][COLS], int sums[ROWS]) {
    // 請在此完成
}

// ========================================
// 練習 3：計算每一列的總和
// ========================================

// TODO: 完成函式 col_sums
// 計算每一列的總和，存入 sums 陣列
void col_sums(int matrix[ROWS][COLS], int sums[COLS]) {
    // 請在此完成
}

// ========================================
// 練習 4：轉置矩陣
// ========================================

// TODO: 完成函式 transpose
// 將 matrix (3x4) 轉置為 result (4x3)
// 轉置 = 行列互換：result[j][i] = matrix[i][j]
void transpose(int matrix[ROWS][COLS], int result[COLS][ROWS]) {
    // 請在此完成
}

// ============================================================

int main() {
    int matrix[ROWS][COLS] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12}
    };
    
    // 測試練習 1
    printf("=== 練習 1：印出矩陣 ===\n");
    print_matrix(matrix);
    /* 預期輸出：
       1   2   3   4
       5   6   7   8
       9  10  11  12
    */
    
    // 測試練習 2
    printf("\n=== 練習 2：每行總和 ===\n");
    int rsums[ROWS];
    row_sums(matrix, rsums);
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d 總和: %d\n", i, rsums[i]);
    }
    // 預期：Row 0=10, Row 1=26, Row 2=42
    
    // 測試練習 3
    printf("\n=== 練習 3：每列總和 ===\n");
    int csums[COLS];
    col_sums(matrix, csums);
    for (int j = 0; j < COLS; j++) {
        printf("Col %d 總和: %d\n", j, csums[j]);
    }
    // 預期：Col 0=15, Col 1=18, Col 2=21, Col 3=24
    
    // 測試練習 4
    printf("\n=== 練習 4：轉置矩陣 ===\n");
    int transposed[COLS][ROWS];
    transpose(matrix, transposed);
    printf("轉置後 (%dx%d):\n", COLS, ROWS);
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%4d", transposed[i][j]);
        }
        printf("\n");
    }
    /* 預期輸出：
       1   5   9
       2   6  10
       3   7  11
       4   8  12
    */
    
    return 0;
}
