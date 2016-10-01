/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author shahril
 */
public class BigInt {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int T = Integer.parseInt(sc.nextLine());
        
        while(T --> 0) {
            
            String A = sc.nextLine();
            String B = sc.nextLine();
            
            BigInteger bigInt = new BigInteger("0");
            bigInt = bigInt.add(new BigInteger(A));
            bigInt = bigInt.add(new BigInteger(B));
            
            System.out.println(bigInt.toString());
        }
    }
    
}
