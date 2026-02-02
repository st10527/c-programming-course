# C 語言程式碼風格指南

本指南定義本課程的程式碼風格標準。遵循一致的風格可以提高程式碼的可讀性。

---

## 1. 縮排與空白

### 縮排
- 使用 **4 個空格** 進行縮排（不要用 Tab）
- 每個區塊層級縮排一次

```c
// ✅ 正確
int main() {
    if (condition) {
        doSomething();
    }
}

// ❌ 錯誤：縮排不一致
int main() {
if (condition) {
doSomething();
}
}
```

### 空格
- 運算子前後加空格
- 逗號後面加空格
- 括號內側不加空格

```c
// ✅ 正確
int sum = a + b;
printf("%d, %d", x, y);
if (x > 0) { }

// ❌ 錯誤
int sum=a+b;
printf("%d,%d",x,y);
if( x>0 ){ }
```

---

## 2. 大括號

- 左大括號放在同一行
- 右大括號獨立一行
- 即使只有一行，也建議使用大括號

```c
// ✅ 正確
if (condition) {
    doSomething();
}

// ⚠️ 可以，但不建議
if (condition)
    doSomething();

// ❌ 錯誤：大括號位置不一致
if (condition)
{
    doSomething();
}
```

---

## 3. 命名規則

### 變數名稱
- 使用有意義的名稱
- 使用小寫字母和底線（snake_case）
- 避免單一字母（除了迴圈變數 i, j, k）

```c
// ✅ 正確
int student_count;
int max_score;
double total_price;

// ❌ 錯誤
int x;
int a1;
int studentcount;
```

### 常數
- 使用全大寫和底線

```c
// ✅ 正確
#define MAX_SIZE 100
const int MAX_STUDENTS = 50;
```

### 函式名稱
- 使用動詞開頭
- 使用小寫字母和底線

```c
// ✅ 正確
int calculate_sum(int a, int b);
void print_result(int value);
int is_valid(int input);
```

---

## 4. 註解

### 何時寫註解
- 解釋「為什麼」，而不是「做什麼」
- 複雜的邏輯需要註解
- 不明顯的程式碼需要註解

```c
// ✅ 好的註解：解釋為什麼
int retry_count = 3;  // 網路不穩定，需要重試機制

// ❌ 壞的註解：說了等於沒說
int x = 5;  // 設定 x 為 5
```

### 註解格式
- 單行註解使用 `//`
- 多行註解使用 `/* */`
- 函式前面加說明註解

```c
/**
 * 計算兩數的最大公因數
 * 
 * @param a 第一個正整數
 * @param b 第二個正整數
 * @return a 和 b 的最大公因數
 */
int gcd(int a, int b) {
    // 使用輾轉相除法
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
```

---

## 5. 程式結構

### 檔案開頭
每個檔案開頭應該有說明：

```c
/**
 * filename.c - 簡短說明
 * 
 * 更詳細的說明（如果需要）
 * 
 * 作者：你的名字
 * 日期：2026-02-XX
 */

#include <stdio.h>
```

### 函式順序
1. main 函式
2. 其他函式（按呼叫順序或功能分組）

或者：
1. 函式宣告
2. main 函式
3. 函式定義

---

## 6. 其他建議

### 一行一件事
```c
// ✅ 正確
int a = 5;
int b = 10;

// ⚠️ 避免
int a = 5, b = 10;
```

### 避免魔術數字
```c
// ✅ 正確
#define MAX_STUDENTS 30
int scores[MAX_STUDENTS];

// ❌ 錯誤
int scores[30];  // 30 是什麼意思？
```

### 檢查返回值
```c
// ✅ 正確
if (scanf("%d", &x) != 1) {
    printf("輸入錯誤\n");
    return 1;
}

// ⚠️ 危險
scanf("%d", &x);  // 沒有檢查是否成功
```

---

## 總結

| 項目 | 規則 |
|-----|------|
| 縮排 | 4 個空格 |
| 大括號 | 左括號同行，右括號獨立行 |
| 變數命名 | snake_case，有意義 |
| 常數命名 | UPPER_SNAKE_CASE |
| 註解 | 解釋「為什麼」 |
| 空格 | 運算子前後，逗號後 |
