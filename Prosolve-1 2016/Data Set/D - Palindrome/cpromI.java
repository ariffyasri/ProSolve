import java.util.*;
public class cpromI {
        public static void main(String [] args) {
                Scanner scn = new Scanner(System.in);
                int n = scn.nextInt();
                for(int x=0;x<n;x++) {
                        int num = scn.nextInt();
                        boolean palindrome = true;
                        int count = 0;
                        int reverse=0;
                        while(palindrome) {
                                if(count < 10) {
                                        reverse = 0;
                                        int temp = num;
                                        while(temp != 0){
                                                reverse = reverse * 10;
                                                reverse = reverse + (temp%10);
                                                temp /= 10;
                                        }
                                        if(reverse == num) {
                                                palindrome = false;
                                        }
                                        else {
                                                num = num+reverse;
                                        }
                                }
                                else {
                                        palindrome = false;
                                        num = num-reverse;
                                }
                                count++;
                        }
                        if(count >= 10) {
                                System.out.println(num +";None");
                        }
                        else {
                                System.out.println(num +";Palindrome;" +count);
                        }
                }
        }
}