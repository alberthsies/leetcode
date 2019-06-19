# 7. Reverse Integer
`Easy`

| # | File name          | Language | Time complexity | Space complexity | 
|:-:|:------------------ |:--------:|:---------------:|:----------------:|
| 1 | reverse.cpp        | `C++`    | `O(n)` | `O(1)` |


---

## Reverse Solution

The main issue of this solution is to deal with the integer boudary.

1. Negative check

Check if the given number is negative and keep a sign if it is since we will need to add it back afterward.

2. Reverse

Reverse the number's unit digit one by one.

:exclamation: Note that we need to use a `long` variable instead of a `int` one since the reversed number may exceed the `int` boundary.

3. Bondary check

Check the boundary and add back the negative mark if needed.

:exclamation: Note that the function will return `0` if the answer exceed the `int` boundary.