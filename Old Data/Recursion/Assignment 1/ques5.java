import java.util.Scanner;

public class ques5 {

    static int powMod(int a, int b, int m){
        if(b==0) return 1;
        else return ((a%m)*powMod(a,b-1,m))%m;
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the values of a, b and m to find (a^b)%m: ");
        int a=s.nextInt(),b=s.nextInt(),m=s.nextInt();
        int result=powMod(a,b,m);
        System.out.println("The result is: "+result);

    }
}
