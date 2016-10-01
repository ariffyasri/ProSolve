import java.util.*;

public class StringLong {
   public static void main(String [] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      for(int i=0;i<n;i++) {
         String str = scn.next();
         if(str.length()>10)
            System.out.println(str.charAt(0) +"" +(str.length()-2)+""+str.charAt(str.length()-1));
         else
            System.out.println(str);
      }
   }
}