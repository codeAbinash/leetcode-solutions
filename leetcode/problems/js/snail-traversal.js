// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

Array.prototype.snail = function (rowsCount, colsCount) {
   if (rowsCount * colsCount !== this.length) return [];
   const result = Array(rowsCount).fill([]).map(() => []);

   for (let i = 0; i < colsCount; i++)
      if (i % 2 === 0)
         for (let j = 0; j < rowsCount; j++)
            result[j][i] = this.shift();
      else
         for (let j = rowsCount - 1; j >= 0; j--)
            result[j][i] = this.shift();

   return result;
}