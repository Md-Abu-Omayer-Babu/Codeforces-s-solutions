// Problem link : https://codeforces.com/problemset/problem/1814/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

import java.util.Scanner;
public class A_Coins {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        long t = scn.nextLong();
        while (t > 0){
            long n = scn.nextLong();
            long k = scn.nextLong();

            if((n % 2 == 0) || (n - k) % 2 == 0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }

            t--;
        }
    }
}
