import java.util.Scanner;

public class PrimeSubtraction {

    static void makePrimeArr(boolean[] isPrime,int n){
        for(int a=1;a<=n;a++){
            isPrime[a]=true;
        }
        int count=0;
        for(int a=2;a<=n;a++)
            if(isPrime[a])
            {
                for(int b=a*a;b<=n;b+=a)
                    isPrime[b]=false;
            }
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
    }
}
