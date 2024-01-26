// by @codeAbinash
// Time : O(n)
// Space : O(1)

function largestAltitude(gain) {
  let altitude = 0
  let max = 0
  for (let g of gain) {
    altitude += g
    max = Math.max(max, altitude)
  }
  return max
}