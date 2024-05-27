import java.util.Scanner;

public class Permutation {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        if(n%2==1)
            System.out.println("-1");
        else{
            for(int a=1;a<=n;a++)
                if(a%2==1)
                    System.out.print(a+1+" ");
                else
                    System.out.print(a-1+" ");
        }
    }
}
