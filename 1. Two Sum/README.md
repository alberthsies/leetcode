# 1. Two Sum
`Easy`

| # | File name          | Language | Time complexity | Space complexity | 
|:-:|:------------------ |:--------:|:---------------:|:----------------:|
| 1 | brute_force.cpp    | `C++`    | `O(n^2)` | `O(1)` |
| 2 | hash_map.cpp       | `C++`    | `O(n)` | `O(n)` |


---

## Brute Force Solution

The algorithm is quite simple. 

It basically goes through the numbers one by one and terminates after finding the right pair of numbers.


## Hash Map Solution

There are totally three steps for this solution.

1. Check the boundary

...Check the boundary to prevent vectors less than two elements.

...However, this is an `Easy` level problem, the boundary check isn't that necessary though.

2. Create a hash map

...Creating a hash map using `unordered_multimap` provided by `C++ STL`. The reason for using an `ubordered_multimap` instead of an `unordered_map` is because there might be cases having duplicate values.

...The map will use the value as `key` and use the index as `value`.

...This should take `O(n)` time complexity and `O(n)` space complexity.

3. Check the hash map 

...Since we already got the hash map, we can check the remain (target - num in `nums`) in `O(1)` time complexity.

...Thus went through the Vector's items one by one will return us the answer within `O(n)` time complexity.

...Note that we will have to check for the duplicate numbers before returning the numbers.
