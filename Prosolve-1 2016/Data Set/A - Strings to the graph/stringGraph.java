import java.util.*;
public class stringGraph {
   public static void main(String [] args) {
      Scanner scn = new Scanner(System.in);
      String ls = System.getProperty("line.separator");
      scn.useDelimiter(ls);

      int n = scn.nextInt();
      for(int i=0; i<n; i++) {
         String str = scn.next();
         StringTokenizer st = new StringTokenizer(str," ");
         while(st.hasMoreTokens()) {
            String word = st.nextToken();

            if(word.equals(",")){ 
               break;
            }
            else {
               for(int j=0; j<word.length(); j++) {
                  System.out.print("*");
               }
               System.out.println();
            }
            
         }
         System.out.println();
      }
   }
}