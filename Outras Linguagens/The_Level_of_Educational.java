import java.util.*;

class The_level_of_Educational
{
    public static void main(String[] args)
    {
        Scanner con = new Scanner(System.in);
        int n = con.nextInt();
        if (n <= 3) System.out.println("Initial"); else
        if (n <= 6) System.out.println("Average"); else
        if (n <= 9) System.out.println("Sufficient"); else
                    System.out.println("High");
        con.close();
    }
}