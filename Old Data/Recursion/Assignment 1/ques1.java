import java.util.Scanner;

public class ques1 {
    static int f(int n){
        if(n==1) return 1;
        else return n*f(n-1);
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a number: ");
        System.out.println("The factorial is: "+f(s.nextInt()));
    }

}
