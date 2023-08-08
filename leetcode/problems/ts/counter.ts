// by @codeAbinash
// Time : O(1)
// Space : O(1)

function createCounter(n: number): () => number {
   return () => n++
}


/** 
* const counter = createCounter(10)
* counter() // 10
* counter() // 11
* counter() // 12
*/