# 14. Longest Common Prefix
`Easy`

| # | File name          | Language | Time complexity | Space complexity | 
|:-:|:------------------ |:--------:|:---------------:|:----------------:|
| 1 | lcp.cpp            | `C++`    | `O(n)` | `O(1)` |


---

## Longest Common Prefix Solution

I took some time for this one since I misunderstand the meaning of `Prefix`. I thought that the common substrings might appear in the middle of the given strings, which I believe is `medium` or even `hard` level.

In this case, the `n` in `time complexity` stands for the number of `char` in all strings.

There are a few steps to this problem.

1. Boundary check. Return `""` if the array is empty.

2. Use the first string to find the longest common prefix while comparing with the rest.