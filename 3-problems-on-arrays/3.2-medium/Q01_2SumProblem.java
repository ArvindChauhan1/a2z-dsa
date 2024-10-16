import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class Q01_2SumProblem {

        // 1.Bruteforce (two loops)
        // 3. two pointer approach (not for leetcode)
        static void isTwoSumPosiible(int[] nums, int target) {
                Arrays.sort(nums);

                int l = 0, r = nums.length - 1;

                while (l <= r) {
                        if (nums[l] + nums[r] == target) {
                                System.out.println("Yes");
                                return;
                        }

                        if (nums[l] + nums[r] < target) {
                                l++;
                        } else {
                                r--;
                        }
                }

                System.out.println("No");
        }

        static int[] twoSum(int[] nums, int target) {

                HashMap<Integer, Integer> m = new HashMap<>();

                for (int i = 0; i < nums.length; i++) {
                        m.put(nums[i], i);
                }

                for (int i = 0; i < nums.length; i++) {
                        int f = target - nums[i];
                        if (m.containsKey(f) && m.get(f) != i) {
                                return new int[] { i, m.get(f) };
                        }
                }
                return new int[] { -1, -1 };
        }

        public static void main(String[] args) {
                try (Scanner sc = new Scanner(System.in)) {
                        int n = sc.nextInt();

                        int[] nums = new int[n];
                        for (int i = 0; i < nums.length; i++) {
                                nums[i] = sc.nextInt();
                        }

                        int target = sc.nextInt();

                        // isTwoSumPosiible(nums, target);

                        int res[] = twoSum(nums, target);

                        for (int i : res) {
                                System.out.println(i);
                        }
                }
        }
}