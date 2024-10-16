import java.util.ArrayList;
import java.util.Scanner;

public class Q9_ArrayLeaders {

    static ArrayList<Integer> leaders(int n, int arr[]) {
        // Your code here

        ArrayList<Integer> res = new ArrayList<>();

        int maxFromRight = Integer.MIN_VALUE;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                // res.add(maxFromRight);
                res.add(0, maxFromRight);
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int nums[] = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        ArrayList<Integer> res = leaders(n, nums);

        for (Integer i : res) {
            System.out.print(i + ' ');
        }

        sc.close();
    }
}