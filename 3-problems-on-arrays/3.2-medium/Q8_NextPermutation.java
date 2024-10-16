import java.util.Arrays;
import java.util.Scanner;

public class Q8_NextPermutation {

    static void printArray(int[] nums) {
        for (int i : nums) {
            System.out.println(i);
        }
    }

    static void nextPermutation(int[] nums) {
        int n = nums.length;
        // find break point

        int bp = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                bp = i;
                break;
            }
        }

        if (bp == -1) {
            Arrays.sort(nums);
            printArray(nums);
            return;
        }

        for (int i = n - 1; i > bp; i--) {
            if (nums[i] > nums[bp]) {
                int t = nums[i];
                nums[i] = nums[bp];
                nums[bp] = t;
                break;
            }
        }

        Arrays.sort(nums, bp+1, n);

        printArray(nums);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int nums[] = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        nextPermutation(nums);
        sc.close();
    }
}