import java.util.Scanner;

public class Panoramix_prediction {

    public static boolean isprime(int n){
        for(int a=2;a<=Math.sqrt(n);a++)
            if(n%a==0)
                return false;
        return true;
    }

    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int a=s.nextInt(),b=s.nextInt();
        int next=0;
        for(int i=a+1;i<=b;i++){
            if(isprime(i))
            {next=i;break;}
        }
        if(next==b)
            System.out.println("YES");
        else System.out.println("NO");
    }
}
