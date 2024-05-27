import java.util.Scanner;

public class ques6 {

    static int gcd(int a,int b){
        if(a%b==0)return b;
        else return gcd(b,a%b);
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.printf("Enter two numbers to find the GCD: ");
        int a=s.nextInt(),b=s.nextInt();
        System.out.printf("The GCD is: "+gcd(a,b));
    }

}
