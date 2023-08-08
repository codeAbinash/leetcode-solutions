// by @codeAbinash
// Time : O(1)
// Space : O(1)

async function sleep(millis: number): Promise<void> {
   return new Promise(res => setTimeout(res, millis))
}