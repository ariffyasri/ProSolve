import java.util.*;
public class Gsol {
	public static void main(String [] args) {
		Scanner scn = new Scanner(System.in);
		int num = scn.nextInt();

		for(int x=0;x<num;x++) {
			int n = scn.nextInt();
			int m = scn.nextInt();
			int a = scn.nextInt();

			double height = n;
			double width = m;
			
			long div = (long)width/a;
			long newVal = 0;
			if(div > 0) {
				newVal = div * a;
				if(newVal < width) {
					div += 1;
				}
			}
			else
				div = 1;

			long divH = (long)height/a;
			newVal = 0;
			
			if(divH > 0) {
				newVal = divH * a;
				if(newVal < height) {
					divH += 1;
				}

			}
			else 
				divH = 1;
			long total = div*divH;
			System.out.println("Case "+(x+1)+": "+total);
		}
			
	}
}