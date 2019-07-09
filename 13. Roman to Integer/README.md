# 13. Roman to Integer
`Easy`

| # | File name          | Language | Time complexity | Space complexity | 
|:-:|:------------------ |:--------:|:---------------:|:----------------:|
| 1 | roman.cpp          | `C++`    | `O(n)` | `O(1)` |


---

## Reverse Solution

The main issue of this question is to handle the numbers such as `IV`, `IX`, `XL`, and etc.

During each Roman number, check if it is larger then the previous number.

If `YES`, delete the previous number and minus it again.

If `No`, add the original number as usual.