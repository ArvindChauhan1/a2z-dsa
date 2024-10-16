import java.util.Arrays;
import java.util.Scanner;

public class Q10_LongestConsecutiveSequence {

    static int longestConsecutive(int[] nums) {

        if (nums.length < 1) {
            return nums.length;
        }

        Arrays.sort(nums);
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i + 1] - nums[i] == 1) {
                count++;
            } else if (nums[i + 1] != nums[i]) {
                count = 0;
            }
            maxCount = Math.max(maxCount, count);
        }

        return maxCount + 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int nums[] = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        System.out.println(longestConsecutive(nums));

        sc.close();
    }
}