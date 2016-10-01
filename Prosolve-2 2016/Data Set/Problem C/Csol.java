import java.util.*;
public class Csol {
	public static void main(String [] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		for(int x=0;x<n;x++) {
			int a = scn.nextInt();
			long total = 1;
			for(int y=a;y>1;y--) {
				total *= y;
			}
			System.out.println("Case "+(x+1)+": "+total);
		}
	}
}