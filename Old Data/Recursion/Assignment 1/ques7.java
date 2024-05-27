import java.util.Scanner;

public class ques7 {

    static int f(int n){
        if(n==1)return 1;
        else return n*f(n-1);
    }

    static int comb(int n,int r){
        return f(n)/(f(n-r)*f(r));
    }

    public static void main(String[] args) {
        System.out.printf("Enter the values of n and r to find nCr: ");
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),r=s.nextInt();
        System.out.printf("The result is: "+comb(n,r));
    }
}
