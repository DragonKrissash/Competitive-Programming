import java.util.Scanner;

public class LuckyString {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        char[] arr={'a','b','c','d'};
        int t=n,a=0;
        while(n>0) {
            if(a>3)
                a=0;
            System.out.print(arr[a]);
            a++;
            n--;
        }
    }
}
