# by @codeAbinash
# Time : O(n)
# Space : O(1)

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        altitude, max_altitude = 0, 0
        for g in gain:
            altitude += g
            max_altitude = max(max_altitude, altitude)
        return max_altitude
