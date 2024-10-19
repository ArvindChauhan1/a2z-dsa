import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Q13_SpiralMatrix {

    static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> list = new ArrayList<>();

        int t = 0, b = matrix.length - 1, r = matrix[0].length - 1, l = 0;

        while (t <= b && l <= r) {
            // add top
            for (int i = l; i <= r; i++) {
                list.add(matrix[t][i]);
            }
            t++;

            // add righ
            for (int i = t; i <= b; i++) {
                list.add(matrix[i][r]);
            }
            r--;

            // add bottom
            if (t <= b) {
                for (int i = r; i >= l; i--) {
                    list.add(matrix[b][i]);
                }
                b--;
            }

            // add left
            if (l <= r) {
                for (int i = b; i >= t; i--) {
                    list.add(matrix[i][l]);
                }
                l++;
            }
        }

        return list;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int n = sc.nextInt();

        int[][] matrix = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        List<Integer> res = spiralOrder(matrix);
        System.out.println(res);

        sc.close();
    }
}