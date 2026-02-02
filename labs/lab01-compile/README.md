# Lab 01: 編譯與程式閱讀

## 🎯 目標

1. 熟悉編譯與執行流程
2. 學會解讀編譯錯誤訊息
3. 練習程式碼閱讀與追蹤

## 📋 作業說明

### Part 1: 修正編譯錯誤 (40%)

`src/buggy.c` 中有幾個編譯錯誤，請找出並修正它們。

```bash
gcc src/buggy.c -o buggy
```

**要求**：
- 不要改變程式的邏輯，只修正語法錯誤
- 修正後程式應該能正常編譯執行

### Part 2: 程式閱讀題 (40%)

閱讀 `src/reading.c` 的程式碼，在 `reading_answers.md` 中回答問題。

**注意**：請先閱讀程式碼並回答問題，**不要**先執行程式！

### Part 3: 預測輸出 (20%)

`src/predict.c` 包含幾個小程式片段。  
請在 `predict_answers.md` 中預測每個片段的輸出。

完成後可以執行程式驗證你的答案。

## 📁 檔案結構

```
lab01-compile/
├── README.md
├── src/
│   ├── buggy.c          # Part 1: 需要修正的程式
│   ├── reading.c        # Part 2: 程式閱讀
│   └── predict.c        # Part 3: 預測輸出
├── reading_answers.md   # Part 2 答案
├── predict_answers.md   # Part 3 答案
└── .github/
    └── workflows/
        └── classroom.yml
```

## ✅ 評分標準

| 項目 | 配分 | 說明 |
|-----|-----|------|
| buggy.c 修正 | 40% | 自動測試編譯與執行 |
| 閱讀題答案 | 40% | 答案正確且有解釋 |
| 預測輸出 | 20% | 預測正確 |

## 🤖 AI 使用規範

- ✅ 可以用 AI 解釋錯誤訊息的含義
- ⚠️ 閱讀題請先自己思考，不要直接問 AI
- ⚠️ 預測輸出請先自己追蹤，再用執行驗證
