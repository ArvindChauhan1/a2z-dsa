import java.util.Scanner;

public class Q12_RotateImage {

    static void rotate(int[][] matrix) {

        int col = matrix[0].length;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = i; j < col; j++) {
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;
            }
        }

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < col / 2; j++) {
                int t = matrix[i][j];
                matrix[i][j] = matrix[i][col - j - 1];
                matrix[i][col - j - 1] = t;
            }
        }

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int n = sc.nextInt();

        int[][] arr = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        rotate(arr);

        sc.close();
    }
}