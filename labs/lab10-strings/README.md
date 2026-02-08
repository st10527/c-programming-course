# Lab 10: 字串

## 🎯 目標

1. 理解字串在記憶體中的表示（字元陣列 + '\0'）
2. 熟悉常用字串函式（strlen, strcmp, strcpy, strcat）
3. 了解字串操作的安全問題

## 📋 作業說明

### Part 1: 字串操作 (40%)

完成 `src/strings.c` 中的字串操作函式。

### Part 2: 安全分析 (30%)

在 `safety_answers.md` 中分析 `src/safety.c` 的安全問題。

### Part 3: 字串函式實作 (30%)

完成 `src/my_string.c` 中手動實作的字串函式。

## 📁 檔案結構

```
lab10-strings/
├── README.md
├── src/
│   ├── strings.c        # Part 1: 字串操作
│   ├── safety.c         # Part 2: 安全分析
│   └── my_string.c      # Part 3: 手動實作
├── safety_answers.md
└── .github/
    └── workflows/
        └── classroom.yml
```

## ✅ 評分標準

| 項目 | 配分 |
|-----|-----|
| 字串操作正確 | 40% |
| 安全分析合理 | 30% |
| 手動實作正確 | 30% |
