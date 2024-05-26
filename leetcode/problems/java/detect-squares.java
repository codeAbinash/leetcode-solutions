import java.util.*;

class DetectSquares {
    int[][] count = new int[1001][1001];
    List<int[]> points = new ArrayList<>();

    public DetectSquares() {

    }

    public void add(int[] point) {
        if (count[point[0]][point[1]] == 0) {
            points.add(point);
        }

        count[point[0]][point[1]]++;
    }

    public int count(int[] point) {
        int x1 = point[0], y1 = point[1];
        int total = 0;
        for (int[] curPoint : points) {
            int x3 = curPoint[0], y3 = curPoint[1];

            if (x1 != x3 && y1 != y3 && Math.abs(x3 - x1) == Math.abs(y3 - y1)) {
                total += count[x3][y3] * count[x3][y1] * count[x1][y3];
            }
        }

        return total;
    }
}

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares obj = new DetectSquares();
 * obj.add(point);
 * int param_2 = obj.count(point);
 */