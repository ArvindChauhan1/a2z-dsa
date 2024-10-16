import java.util.Scanner;

public class Q03_MajorityElement {

    // 1. bruteforce using two loops
    // 2. using hashmap
    // 3. using Moore Majority Voting Algorithm
    static int majorityElement(int[] nums) {
        // finding candidate
        int count = 0, candidate = -1;

        for (int i : nums) {
            if (count == 0) {
                candidate = i;
                count++;
            } else {
                if (candidate == i) {
                    count++;
                } else {
                    count--;
                }
            }
        }

        // checking if candiate > n/2
        count = 0;

        for (int i : nums) {
            if (i == candidate) {
                count++;
            }
        }
        if (count > (nums.length / 2)) {
            return candidate;
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int nums[] = new int[n];

        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        System.out.println(majorityElement(nums));
        sc.close();
    }
}