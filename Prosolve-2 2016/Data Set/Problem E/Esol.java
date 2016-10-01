import java.util.*;

public class Esol {
	public static void main(String [] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();

		for(int x=0;x<n;x++) {
			String a = scn.next();
			String b = scn.next();

			if(a.length() == b.length()) {
				char [] a1 = a.toCharArray();
				char [] b1 = b.toCharArray();
				Arrays.sort(a1);
				Arrays.sort(b1);

				boolean check = Arrays.equals(a1,b1);
				if(check) {
					System.out.println("Case "+(x+1)+": Yes");
				}
				else {
					System.out.println("Case "+(x+1)+": No");
				}
			}
		}
	}

}