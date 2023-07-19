// by @codeAbinash
// Time : O(1)
// Space : O(1)

function isEmpty(obj: Record<string, any> | any[]): boolean {
   return Object.keys(obj).length === 0;
};