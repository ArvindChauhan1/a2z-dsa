import java.util.Scanner;

public class Q07_RearrangeArrayElementsbySign {

    // 1. pos and neg array then merge space com

    static int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int res[] = new int[n];
        int pos = 0, neg = 1;

        // for same number of elements
        // for (int i : nums) {
        // if (i > 0) {
        // res[pos] = i;
        // pos += 2;
        // } else {
        // res[neg] = i;
        // neg += 2;
        // }
        // }

        // for diff num of elem
        for (int i : nums) {
            if (i > 0 && pos <= n) {
                res[pos] = i;
                pos += 2;
            } else if (neg < n) {
                res[neg] = i;
                neg += 2;
            } else {
                res[n - 1] = i;
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

        int res[] = rearrangeArray(nums);

        for (int i : res) {
            System.out.println(i);
        }

        sc.close();
    }
}