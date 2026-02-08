# 第 5 週：條件判斷

## 📋 本週大綱

| 課堂 | 主題 | 時長 |
|-----|------|-----|
| 講課 A | if-else 結構 | 2 hr |
| 講課 B | 程式碼品質比較 | 2 hr |
| 實驗課 | 條件練習 | 1 hr |

---

## 🎓 講課 A：if-else 結構

### 簡報大綱

1. **布林值與條件** (20 min)
   - C 語言中的「真」與「假」
   - 0 = false，非 0 = true
   - 比較運算子：`>`, `<`, `>=`, `<=`, `==`, `!=`

2. **if 敘述** (25 min)
   - 基本語法
   - 單行 vs 多行
   - 大括號的重要性

3. **if-else 敘述** (25 min)
   - 語法結構
   - 執行流程
   - 二選一的邏輯

4. **else if 串接** (25 min)
   - 多重條件判斷
   - 執行順序的重要性
   - 與多個獨立 if 的差別

5. **巢狀 if** (20 min)
   - 巢狀結構
   - 懸空 else 問題
   - 何時使用巢狀、何時用 else if

6. **練習** (5 min)

### 關鍵程式碼片段

#### 片段 1：基本 if-else
```c
int score = 75;

if (score >= 60) {
    printf("及格\n");
} else {
    printf("不及格\n");
}
```
> 完整範例：examples/conditions.c

#### 片段 2：else if 串接
```c
if (score >= 90) {
    printf("A\n");
} else if (score >= 80) {
    printf("B\n");
} else if (score >= 70) {
    printf("C\n");
} else {
    printf("F\n");
}
```

#### 片段 3：常見錯誤 - 多個 if vs else if
```c
// ❌ 每個 if 都會檢查（可能印出多個）
if (score >= 60) printf("D ");
if (score >= 70) printf("C ");
if (score >= 80) printf("B ");

// ✅ else if 只會進入一個分支
if (score >= 80) printf("B");
else if (score >= 70) printf("C");
else if (score >= 60) printf("D");
```

---

## 🎓 講課 B：程式碼品質比較

### 簡報大綱

1. **邏輯運算子** (25 min)
   - `&&` (AND)、`||` (OR)、`!` (NOT)
   - 真值表
   - 組合條件

2. **短路求值** (20 min)
   - `&&` 左邊為 false 時不算右邊
   - `||` 左邊為 true 時不算右邊
   - 實際應用：防止除以零

3. **switch 敘述** (25 min)
   - 語法結構
   - break 的重要性
   - fall-through 行為
   - switch vs if-else 的選擇

4. **條件運算子 `?:`** (15 min)
   - 三元運算子語法
   - 適合簡單的二選一
   - 不要過度嵌套

5. **好的 vs 壞的條件寫法** (30 min)
   - **重點：程式碼品味**
   - Guard Clause 模式
   - 避免深層巢狀
   - 簡化布林表達式

6. **討論** (5 min)

### 關鍵程式碼片段

#### 片段 1：短路求值防止除以零
```c
int divisor = 0;
// 如果 divisor 為 0，右邊不會執行，避免除以零錯誤
if (divisor != 0 && 100 / divisor > 5) {
    printf("商大於 5\n");
}
```
> 完整範例：examples/quality.c

#### 片段 2：好的寫法 vs 壞的寫法
```c
// ❌ 壞的：深層巢狀
if (age >= 18) {
    if (hasID) {
        if (hasTicket) {
            enter();
        }
    }
}

// ✅ 好的：Guard Clause
if (age < 18) return;
if (!hasID) return;
if (!hasTicket) return;
enter();
```

### 課堂討論問題
1. 什麼情況下用 switch 比 if-else 更好？
2. 你覺得條件運算子 `?:` 好讀嗎？什麼時候適合用？
3. 給你一段深層巢狀的程式碼，你會怎麼重構？

---

## 🔬 實驗課：條件練習

**對應作業**：lab04-conditions

### 實驗目標
1. 熟悉 if-else 條件判斷結構
2. 理解邏輯運算子和短路求值
3. 學會辨識並改善不良的條件寫法

### 實驗內容
1. 條件判斷實作
2. 程式碼品質比較
3. 條件追蹤

---

## ✅ 本週學習檢核

學完本週後，你應該能夠：

- [ ] 正確使用 if、else if、else
- [ ] 使用邏輯運算子組合條件
- [ ] 解釋短路求值的原理與應用
- [ ] 使用 switch 處理多重選擇
- [ ] 辨識並改善深層巢狀的條件式
- [ ] 知道何時用 if-else、何時用 switch

---

## 📎 常見問題

**Q: C 語言有 bool 型態嗎？**
A: C99 標準開始有 `_Bool` 型態，也可以 `#include <stdbool.h>` 使用 `bool`、`true`、`false`。但傳統上 C 用 `int`，0 代表 false，非 0 代表 true。

**Q: switch 可以比較字串嗎？**
A: 不行，switch 只能比較整數型態（int、char 等）。字串比較要用 `strcmp()`。

**Q: if 後面不加大括號可以嗎？**
A: 語法上可以（只會控制下一行），但非常不建議，容易造成 bug。請永遠加大括號。
