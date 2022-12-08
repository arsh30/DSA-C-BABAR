import java.util.*;

public class pattern2 {

  public static Scanner scn = new Scanner(System.in);

  /* 
   Observation
   1) Kinte rows hai 5 ie n
   2) Kitne columns hai 5 ie n
   3) Making formula to print, related krege i,j,n se
   
   */
  public static void pattern1(int n) {
    for (int i = n; i >= 1; i--) {
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
