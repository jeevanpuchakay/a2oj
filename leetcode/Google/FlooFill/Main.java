import java.util.Queue;

class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        Queue<Pair> qu = new Queue<Pair>();
        qu.add(new Pair(sr, sc));
        Pair temp;
        while (!qu.isEmpty()) {
            temp = qu.peek();
            qu.remove();
            if ((temp.x > 0) && (image[temp.x - 1][temp.y] == image[temp.x][temp.y])) {
                // floodFill(image, sr - 1, sc, newColor);
                qu.add(new pair(temp.x - 1, temp.y));
            }
            if ((temp.y > 0) && (image[temp.x][temp.y - 1] == image[temp.x][temp.y])) {
                // floodFill(image, temp.x, temp.y - 1, newColor);
                qu.add(new Pair(temp.x, temp.y - 1));
            }
            if ((temp.y < image[0].length - 1) && (image[temp.x][temp.y] == image[temp.x][temp.y + 1])) {
                // floodFill(image, temp.x, temp.y + 1, newColor);
                qu.add(new Pair(temp.x, temp.y + 1));
            }
            if ((temp.x < image.length - 1) && (image[temp.x][temp.y] == image[temp.x + 1][temp.y])) {
                // floodFill(image, temp.x + 1, temp.y, newColor);
                qu.add(new Pair(temp.x + 1, temp.y));
            }
            image[temp.x][temp.y] = newColor;
        }
        return image;
    }
}

class Pair {
    int x, y;

    Pair(int a, int b) {
        this.x = a;
        this.y = b;
    }
}