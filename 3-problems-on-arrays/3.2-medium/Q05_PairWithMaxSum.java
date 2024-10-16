import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Q05_PairWithMaxSum {

    static int pairWithMaxSum(List<Integer> arr) {
        // Your code goes here
        int maxSum = 0;
        for (int i = 0; i < arr.size() - 1; i++) {
            maxSum = Math.max(maxSum, (arr.get(i) + arr.get(i + 1)));
        }
        return maxSum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        ArrayList<Integer> arr = new ArrayList<>();

        while (n-- != 0) {
            arr.add(sc.nextInt());
        }

        System.out.println(pairWithMaxSum(arr));

        sc.close();
    }
}