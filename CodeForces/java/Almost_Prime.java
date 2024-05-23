import java.util.Scanner;

public class Almost_Prime {

    public static boolean isprime(int n){
        for(int a=2;a<=Math.sqrt(n);a++)
            if(n%a==0)
                return false;
        return true;
    }

    public static boolean isAlmostPrime(int n){
        int c=0;
        for(int a=2;a<=n;a++){
            if(n%a==0)
                if(isprime(a))
                   c++;
        }

        if(c==2)return true;
        else return false;
    }

    public static void  main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(); int c=0,count=0;
        for(int a=1;a<=n;a++){
            if(!isprime(a)){
                if(isAlmostPrime(a))
                    c++;
            }
        }
        System.out.println(c);
    }

}
