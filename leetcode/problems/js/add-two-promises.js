// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */

var addTwoPromises = async function (promise1, promise2) {
   const [num1, num2] = await Promise.all([promise1, promise2])
   return num1 + num2
};