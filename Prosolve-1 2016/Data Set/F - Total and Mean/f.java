import java.util.*;
public class f {
   public static void main(String [] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      for(int x=0;x<n;x++) {
         int total = 0;
         for(int y=0;y<10;y++) {
            int city = scn.nextInt();
            total += city;
         }
         int mean = total/10;
         System.out.println(total +" " +mean);
      }
   }
}