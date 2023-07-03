// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

int majorityElement(int num[], int n) {
    int count = 0, elem;
    for (int i = 0; i < n; i++) {
        if (count == 0) elem = num[i];
        if (elem == num[i]) count++;
        else count--;
    }
    return elem;
}