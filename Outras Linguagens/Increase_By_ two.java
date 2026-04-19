import java.util.*;

class Increase_By_two
{
  public static void main(String[] args) 
  {
    Scanner con = new Scanner(System.in);
    int n = con.nextInt();
    ArrayList<Integer> m = new ArrayList<Integer>(); 
    for (int i = 0; i < n; i++)
    {
      int val = con.nextInt();
      m.add(val);
    }
    
    for (int i = 0; i < n; i++)
      if (m.get(i) >= 0) m.set(i,m.get(i)+2);
    
    for (int i = 0; i < n; i++)
      System.out.print(m.get(i) + " ");
    System.out.println();
    con.close();
  }
}