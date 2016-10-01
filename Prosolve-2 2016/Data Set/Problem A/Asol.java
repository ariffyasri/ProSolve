import java.util.*;
import java.text.*;
public class Asol {
	public static void main(String [] args) {
		DecimalFormat df = new DecimalFormat("0.00");
		Scanner scn = new Scanner (System.in);
		int n = scn.nextInt();
		for(int x=0;x<n;x++) {
			int a = scn.nextInt();
			int b = scn.nextInt();

			double total = Math.pow(a,2) + Math.sqrt(b);
			System.out.println("Case "+(x+1)+": "+df.format(total));
		}
	}
}