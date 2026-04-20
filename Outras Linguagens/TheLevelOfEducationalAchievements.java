import java.util.*;

class TheLevelOfEducationalAchievements
{
    public static void main(String[] args)
    {
        Scanner con = new Scanner(System.in);
        int n = con.nextInt();
        switch (n)
        {
            case 1:
            case 2:
            case 3:
                System.out.println("Initial");
                break;
            case 4:
            case 5:
            case 6:
                System.out.println("Average");
                break;
            case 7:
            case 8:
            case 9:
                System.out.println("Sufficient");
                break;
            default:
                System.out.println("High");
        }
        con.close();
    }
}