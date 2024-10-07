
# Sliding Window

The sliding window technique is a method for solving problems that involve arrays or lists. It is particularly useful for problems that require examining contiguous subarrays or sublists.

## Key Concepts

- **Window Size**: The number of elements in the window.
- **Window Position**: The current position of the window in the array.

## Common Problems

1. **Maximum Sum Subarray of Size K**: Find the maximum sum of any contiguous subarray of size `k`.
2. **Longest Substring Without Repeating Characters**: Find the length of the longest substring without repeating characters.

## Example

### Maximum Sum Subarray of Size K

```python
def max_sum_subarray(arr, k):
    max_sum = 0
    window_sum = 0
    for i in range(len(arr)):
        window_sum += arr[i]
        if i >= k - 1:
            max_sum = max(max_sum, window_sum)
            window_sum -= arr[i - (k - 1)]
    return max_sum

# Example usage
arr = [2, 1, 5, 1, 3, 2]
k = 3
print(max_sum_subarray(arr, k))  # Output: 9
```

### Longest Substring Without Repeating Characters

```python
def longest_substring_without_repeating(s):
    char_index_map = {}
    max_length = 0
    start = 0
    for end in range(len(s)):
        if s[end] in char_index_map:
            start = max(start, char_index_map[s[end]] + 1)
        char_index_map[s[end]] = end
        max_length = max(max_length, end - start + 1)
    return max_length

# Example usage
s = "abcabcbb"
print(longest_substring_without_repeating(s))  # Output: 3
```

## Conclusion

The sliding window technique is a powerful tool for solving a variety of problems involving arrays and strings. By maintaining a window of elements and adjusting its size and position, we can efficiently solve problems that would otherwise require more complex and less efficient solutions.
```