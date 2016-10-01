import java.util.*;
public class Hsol {
  public static void main(String [] args) {
    Scanner scn = new Scanner(System.in);
    int num = scn.nextInt();
    for(int x=0;x<num;x++) {
      int n = scn.nextInt();
      int t = n%5;
      int d = (n-t)/5;
      t=d;
      int tot = d;
      while(t >= 5) {
        t = t%5;
        d = (d-t)/5;
        t=d;
        tot = tot + d;
      }
      System.out.println("Case "+(x+1)+": "+tot);
    }
  }
}