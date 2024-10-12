import java.util.Scanner;

public class Q4_MaximumSubarray {

    // 1. Bruteforce usin two loops
    // 2. using two loops
    // 3. using kadane algorithm

    static int maxSubArray(int[] nums) {
        int maxi = Integer.MIN_VALUE;
        int sum = 0;

        for (int i : nums) {
            sum += i;

            if (maxi < sum) {
                maxi = sum;
            }

            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int nums[] = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        System.out.println(maxSubArray(nums));

        sc.close();
    }
}