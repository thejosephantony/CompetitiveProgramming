import java.util.*;

public class Sum_of_Squares
{
  public static void main(String []args)
  {
    Scanner con = new Scanner(System.in);
    long a = con.nextLong();
    long b = con.nextLong();
    long res = a*a + b*b;    
    System.out.println(res);
    con.close();
  }
} 