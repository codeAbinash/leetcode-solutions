// by @codeAbinash
// Time Complexity : O(log n)
// Space Complexity : O(1)

var guessNumber = function (n) {
    let start = 1, end = n, mid;
    while (start < end) {
        mid = Math.floor((start + end) / 2);
        if (guess(mid) == 0) return mid;
        if (guess(mid) == -1) end = mid - 1;
        else start = mid + 1;
    }
    return start;
};