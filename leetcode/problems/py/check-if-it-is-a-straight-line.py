# by @codeAbinash
# Time : O(n)
# Space : O(1)

class Solution(object):
   def checkStraightLine(self, coordinates):
   
     dx = coordinates[1][0] - coordinates[0][0]
     dy = coordinates[1][1] - coordinates[0][1]

     for i in range(2, len(coordinates)):
        c_dx = coordinates[i][0] - coordinates[i-1][0]
        c_dy = coordinates[i][1] - coordinates[i-1][1]

        if dy * c_dx != dx * c_dy:
           return False
   
     return True