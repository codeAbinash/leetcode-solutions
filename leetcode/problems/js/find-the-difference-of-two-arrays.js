// by @codeAbinash

var findDifference = function (nums1, nums2) {
    nums1 = new Set(nums1)
    nums2 = new Set(nums2)
    const arr1 = [...nums1].filter(elem => !nums2.has(elem))
    const arr2 = [...nums2].filter(elem => !nums1.has(elem))
    return [arr1, arr2]
};