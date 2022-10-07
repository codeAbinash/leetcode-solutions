// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

const checkRecord = s => {
    let countAbsent = 0
    for (let ch of s) if (ch === 'A') countAbsent++;
    return !s.includes('LLL') && countAbsent < 2;
};