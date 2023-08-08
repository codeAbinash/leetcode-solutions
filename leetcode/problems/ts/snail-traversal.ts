// by @codeAbinash
// Time : O(n)
// Space : O(n)

declare global {
   interface Array<T> {
      snail(rowsCount: number, colsCount: number): number[][];
   }
}

Array.prototype.snail = function (rowsCount: number, colsCount: number): number[][] {
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

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */