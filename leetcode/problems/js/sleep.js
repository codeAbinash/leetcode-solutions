// by @codeAbinash
// Time : O(1)
// Space : O(1)

/**
 * @param {number} millis
 */
async function sleep(millis) {
   return new Promise(resolve => setTimeout(resolve, millis))
}