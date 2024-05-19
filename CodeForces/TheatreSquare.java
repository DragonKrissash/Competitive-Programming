import java.util.Scanner;
import java.lang.Math;
public class TheatreSquare {
    public static void  main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),m=s.nextInt(),a=s.nextInt();
        int basenum=(n*m)/(a*a);
        double largeside=(n>m)? n:m;
        double secnum=Math.ceil(largeside/a);
        System.out.println((int)(basenum+secnum));
    }
}
