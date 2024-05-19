import java.util.Scanner;
public class Watermelon {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int w=s.nextInt();
        if(w>0)
        {
            if(w%2==0)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }
}
