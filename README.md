# Leetcode Solutions

[Live Website](https://codeabinash.github.io/leetcode-solutions/)

<p align="center" width="100%">
    <img width="100%" src="https://codeabinash.github.io/leetcode-solutions/images/logo.png">
</p>

<p align="center" width="100%">
    <img width="40%" src="https://codeabinash.github.io/leetcode-solutions/images/illustration/code.png">
</p>

## Installation

Fork this repo then do following things

```
$ git clone https://github.com/YOUR_USER_NAME/leetcode-solutions.git
$ cd leetcode-solutions
$ cd files/problems
```

Inside the problems directory make your language directory (e.g. `c`, `py`, `cpp`) then create a file and paste your code, make sure your solution name match our [Code of Contribution](#code-contribution)

# Code Contribution

- Use meaningful variables name, because we don't know whats x and y you are using.
- Leave a comment if you think your code `could be` hard to understand.
- Your code must have Runtime and Space complexity.
- Leave your social in the solution, it will help people connect with other people

Example of valid solution naming:

```
1. twosum.py
2. move-zeros.py
3. search-in-sorted-array.py
4. twosum-II.py
```

Example of valid function with valid naming:

```
FILE: twosum.py

@USER_NAME
Time: O(n)
Space: O(n); where n is the number elements present in the array

def two_sum(numArr, target):
    seen = {}
    for idx, val in enumerate(numArr): # loop with index, value
        compliment = target - val
        if compliment in seen:
            return [seen[compliment], idx] 
        seen[val] = idx

    return [-1, -1]

```

---

> ## Be a contributor
>
> Even if you have edited this README.md file or have just added one line of code, you are a contributor and you have helped the community, leave your name inside the [contributors.md](contributors.md) with your socials.

Happy Coding!
