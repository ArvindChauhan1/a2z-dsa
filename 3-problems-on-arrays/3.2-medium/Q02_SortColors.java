import java.util.Scanner;

public class Q02_SortColors {

    // 1. using sort function
    // 2. count 1,2 & 3 then populate using loop
    // 3. three pointer approach

    static void swapNums(int[] n, int l, int r) {
        int t = n[l];
        n[l] = n[r];
        n[r] = t;
    }

    static void sortColors(int[] nums) {

        //leetcode
        int l = 0, m = 0, h = nums.length - 1;

        while (m <= h) {
            switch (nums[m]) {
                case 0 -> {
                    swapNums(nums, l, m);
                    l++;
                    m++;
                }
                case 2 -> {
                    swapNums(nums, m, h);
                    h--;
                }
                default -> m++;
            }
        }
        //leetcode end
        for (int i : nums) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] nums = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        sortColors(nums);

        sc.close();
    }
}