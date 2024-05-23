import java.util.Scanner;

public class PrimeFactorization {

    static void makePrimearr(int[] isPrime,int n){
        for(int a=1;a<=n;a++)
            isPrime[a]=a;
        for(int a=2;a<=n;a++)
            if(isPrime[a]==a)
                for(int b=a*a;b<=n;b+=a)
                    if(isPrime[b]==b)
                    isPrime[b]=a;
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] isPrime=new int[n+1];
        makePrimearr(isPrime,n);
        int t=n;
        while(n!=1){
            if(n==t)
                System.out.print(isPrime[n]);
            else
            System.out.print("*"+isPrime[n]);
            n/=isPrime[n];
        }

    }
}
