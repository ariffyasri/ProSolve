import java.util.*;
import java.lang.*;
 
class e {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if(in.hasNextLine())
         in.nextLine(); // skip new line
        for (int i=0; i < n; i++) {
            String s = "";
            if(in.hasNextLine())
               s = in.nextLine();
            for (char c : s.toCharArray()) {
                if (Character.isLetter(c)) {
                    if (Character.isUpperCase(c)) {
                        c += 1;
                        if (c > 'Z') c = 'A';
                    } else {
                        c += 1;
                        if (c > 'z') c = 'a';
                    }
                }
                System.out.print(c);
            }
            System.out.println("");
        }
    }
}