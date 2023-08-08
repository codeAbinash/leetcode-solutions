// by @codeAbinash
// Time : O(1)
// Space : O(1)

async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
   const [num1, num2] = await Promise.all([promise1, promise2]);
   return num1 + num2;
};