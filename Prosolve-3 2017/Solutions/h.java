
import java.util.Scanner;
import java.math.BigInteger;

public class h {
    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();

        for(int i=0; i<n; i++) {
            BigInteger A = new BigInteger(sc.nextLine());
            BigInteger B = new BigInteger(sc.nextLine());
            System.out.println(A.add(B).toString());
        }
    }
}