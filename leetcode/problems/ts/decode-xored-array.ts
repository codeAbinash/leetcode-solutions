// by @codeAbinash
// Time : O(n)
// Space : O(1)

function decode(encoded: number[], first: number): number[] {
   let arr = [first];
   let size = encoded.length
   for (let i = 0; i < size; i++)
      arr.push(encoded[i] ^ arr[i])
   return arr
}