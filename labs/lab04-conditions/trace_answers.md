# Lab 04 Part 3: 條件追蹤答案

請追蹤每個題目的執行流程，預測輸出。

---

## 題目 1：基本 if-else

```c
int a = 7;

if (a > 10) {
    printf("A\n");
} else if (a > 5) {
    printf("B\n");
} else {
    printf("C\n");
}
```

**追蹤**：
- a = 7
- a > 10？___（是/否）
- a > 5？___（是/否）

**預測輸出**：



---

## 題目 2：巢狀條件

```c
int x = 4, y = 6;

if (x > 3) {
    if (y > 5) {
        printf("X\n");
    } else {
        printf("Y\n");
    }
} else {
    printf("Z\n");
}
```

**追蹤**：
- x > 3？___
- 進入哪個分支？
- y > 5？___

**預測輸出**：



---

## 題目 3：邏輯運算子

```c
int p = 5, q = 3;

if (p > 3 && q > 3) {
    printf("Both\n");
} else if (p > 3 || q > 3) {
    printf("One\n");
} else {
    printf("None\n");
}
```

**追蹤**：
- p > 3？___
- q > 3？___
- p > 3 && q > 3？___
- p > 3 || q > 3？___

**預測輸出**：



---

## 題目 4：短路求值

```c
int m = 0, n = 5;

if (m != 0 && n / m > 2) {
    printf("條件成立\n");
} else {
    printf("條件不成立\n");
}
```

**追蹤**：
- m != 0？___
- 會計算 n / m 嗎？___
- 為什麼？

**預測輸出**：



**如果沒有短路求值，會發生什麼？**



---

## 題目 5：連續判斷（注意！不是 else if）

```c
int score = 75;

if (score >= 90)
    printf("A ");
if (score >= 80)
    printf("B ");
if (score >= 70)
    printf("C ");
if (score >= 60)
    printf("D ");
printf("\n");
```

**追蹤**：
- score >= 90？___
- score >= 80？___
- score >= 70？___
- score >= 60？___

**預測輸出**：



**這和 else if 有什麼不同？**



---

## 題目 6：switch

```c
int day = 3;

switch (day) {
    case 1: printf("Mon\n"); break;
    case 2: printf("Tue\n"); break;
    case 3: printf("Wed\n"); break;
    case 4:
    case 5: printf("Thu or Fri\n"); break;
    default: printf("Weekend\n");
}
```

**day = 3 會匹配哪個 case？**



**預測輸出**：



**case 4 和 case 5 共用同一個輸出，這叫什麼技巧？**



---

## 題目 7：switch 沒有 break（Fall-through）

```c
int num = 2;

switch (num) {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n");
    case 3:
        printf("Three\n");
        break;
    default:
        printf("Other\n");
}
```

**num = 2 會進入哪個 case？**



**會執行哪些 printf？**



**預測輸出**：



**為什麼會這樣？忘記 break 會造成什麼問題？**


