// by @codeAbinash
// Time Complexity : O(n^2)
// Space Complexity : O(1)

var rotate = function (matrix) {
    let rowLen = matrix[0].length
    let colLen = matrix.length
    for (let i = 0; i < colLen - 1; i++)
        for (let j = i + 1; j < rowLen; j++)
            [matrix[i][j], matrix[j][i]] = [matrix[j][i], matrix[i][j]]
    for (row of matrix) row.reverse()
};