 import java.util.*;
public class diagonal {
 public static void main(String [] args) {
  Scanner scan = new Scanner(System.in);
  int num=0;
  while(scan.hasNextInt()) {
   num = scan.nextInt();
   int no = num-1;
   for(int y=0;y<num;y++) {
    for(int z=0;z<num;z++) {
     if( z==y || z==(no-y))
      System.out.print("0");
     else
      System.out.print("1");
    }
    System.out.print("\n");
   }
   System.out.println("");
  }
 }
}