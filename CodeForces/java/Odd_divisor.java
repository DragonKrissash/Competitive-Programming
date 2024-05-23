import java.util.Scanner;

public class Odd_divisor {
//
//    public static boolean isprime(long n){
//        for(int a=2;a<=Math.sqrt(n);a++)
//            if(n%a==0)
//                return false;
//        return true;

    public static boolean hasOddDivisor(long n){
        if(n%2!=0)
            return true;
        else {
            while(n>1){
                if(n%2!=0)
                    return true;
                n=n/2;
            }
            return false;
        }
    }

    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();boolean[] arr=new boolean[n];long[] inp=new long[n];
        for(int a=0;a<n;a++)
            inp[a]=s.nextLong();
        for(int a=0;a<n;a++){
            arr[a]=hasOddDivisor(inp[a]);
        }
        for(int a=0;a<n;a++)
            if(arr[a])
                System.out.println("YES");
        else
                System.out.println("NO");
    }
}
