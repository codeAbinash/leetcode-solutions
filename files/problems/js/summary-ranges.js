// by @codeAbinash
// Time Complesity : O(n)
// Space Complesity : O(1)

var summaryRanges = function (nums) {
    let arr = [], index
    for (let i = 0; i < nums.length; i++) {
        index = i
        while ((nums[i] + 1 == nums[i + 1]) && i < nums.length - 1) i++;
        arr.push(nums[index] == nums[i] ? `${nums[index]}` : `${nums[index]}->${nums[i]}`)
    }
    return arr;
};