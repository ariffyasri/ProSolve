import java.util.*;
public class Dsol {
	public static void main(String [] args) {
		Scanner scn = new Scanner (System.in);
		int n = scn.nextInt();
		for (int x=0;x<n;x++) {
			int a = scn.nextInt();
			if((a%4) == 0) {
				if((a%100)==0) {
					if((a%400) == 0)
						System.out.println("Case "+(x+1)+": Yes");
					else
						System.out.println("Case "+(x+1)+": No");
						
				}
				else 
					System.out.println("Case "+(x+1)+": Yes");
			}
			else
				System.out.println("Case "+(x+1)+": No");
		}
	}
}
