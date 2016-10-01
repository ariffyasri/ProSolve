import java.util.*;
public class Bsol {
	public static void main(String [] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();

		for(int x=0;x<n;x++) {
			String str = scn.next();
			int vowels = str.replaceAll("[^aeiouAEIOU]", "").length();
			int consonants = str.length() - vowels;

			System.out.println("Case "+(x+1)+": "+vowels+" "+consonants);

		}
	}
}