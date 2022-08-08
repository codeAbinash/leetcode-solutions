class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        arr = [0] * (len(triangle) + 1)

        for row in triangle[::-1]:
            for i, n in enumerate(row):
                arr[i] = n + min(arr[i], arr[i+1])
        return arr[0]