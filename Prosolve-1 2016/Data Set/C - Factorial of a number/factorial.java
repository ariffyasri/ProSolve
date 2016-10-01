import java.util.Scanner;
public class factorial {
   public static void main(String [] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      for(int i = 0; i<n; i++ ) {
         int no = scn.nextInt();
         int fac = 1;
         for(int j=1;j<=no; j++) {
            fac = fac * j;
         }
         System.out.println(fac);
      }
   }
}