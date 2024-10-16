import java.util.Scanner;

public class Q06_BestTimetoBuyandSellStock {

    // 1. using two loops(bruteforce)
    // 2. find min and calculate max
    static int maxProfit(int[] prices) {
        int maxPro = 0;
        int minPrice = Integer.MAX_VALUE;

        for (int i : prices) {
            minPrice = Math.min(i, minPrice);
            maxPro = Math.max(maxPro, i - minPrice);
        }

        return maxPro;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int prices[] = new int[n];

        for (int i = 0; i < prices.length; i++) {
            prices[i] = sc.nextInt();
        }

        System.out.println(maxProfit(prices));

        sc.close();
    }
}