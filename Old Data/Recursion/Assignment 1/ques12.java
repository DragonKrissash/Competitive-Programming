import java.util.Scanner;

public class ques12 {
    static int sumdig(int n){
        if (n==0)
            return 0;
        else return n%10+sumdig(n/10);
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a number to find the sum of its digits: ");
        int n=s.nextInt();
        System.out.println("The sum of the digits is: "+sumdig(n));
    }
}
