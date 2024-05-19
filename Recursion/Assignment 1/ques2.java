import java.util.Scanner;

public class ques2 {
    static void print(int n){
        if(n==0)
            return;
        print(n-1);
        System.out.println(n);
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a number: ");
        print(s.nextInt());
    }
}
