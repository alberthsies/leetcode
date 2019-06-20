# 9. Palindrome Number
`Easy`

| # | File name          | Language | Time complexity | Space complexity | 
|:-:|:------------------ |:--------:|:---------------:|:----------------:|
| 1 | palindrome.cpp     | `C++`    | `O(n)` | `O(1)` |


---

## Palindrome Solution

This problem is quite similar to the problem `7. Reverse Integer`, since I reverse the integer first and then compare with the original number/

1. Negative check

In this case, negative number return `false`, so I check the integer first.

2. Reverse

Reverse the number's unit digit one by one.

:exclamation: Note that we need to use a `long` variable instead of an `int` one since the reversed number may exceed the `int` boundary.

3. Comparison

Return the comparison with the original number.