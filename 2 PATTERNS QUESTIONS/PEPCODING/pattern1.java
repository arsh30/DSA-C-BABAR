
public class pattern1 {

  public static Scanner scn = new Scanner(System.in);

  /* 
     Observation
     1) Tink Kitni rows hai
     2) Kitne columns hai
     3) Making formula to print, related krege i,j,n se
     */
  public static void pattern1(int n) {
    for (int i = 1; i <= n; i++) {
      // ROWS LOOP, JO BHI IDR LIKHA HOGA VO UTNI BAAR HOGA THEN ENTER LGJAYEGA
      for (int j = 1; j <= i; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    int n = scn.nextInt();
    pattern1(n);
  }
}
