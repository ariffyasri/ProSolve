import java.util.*;
public class Fsol {
 public static void main(String [] args) {
  Scanner scn = new Scanner(System.in);
  int n = scn.nextInt();
  for(int x =1; x<=n;x++) {
   int y = scn.nextInt();
   int z = scn.nextInt();
   int a = scn.nextInt();
   
   if(y >= z && y <= a || y >= a && y <= z)
    System.out.println("Case "+x +": " +y);
   else if (z >= y && z <= a || z >= a && z <= y)
    System.out.println("Case "+x +": " +z);
   else if (a >= y && a <= z || a >= z && a <= y)
    System.out.println("Case "+x +": " +a);
  }
 }
}