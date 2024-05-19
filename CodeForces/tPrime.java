import java.util.Scanner;

public class tPrime {

//    static String isTPrime(int n){
//        int c=0;
//        double root=Math.sqrt(n);
//        int result=n&(n-1);
//        if(result==0)
//            return "YES";
//    if(root==Math.floor(root)) {
//        root = Math.sqrt(root);
//        if(root==Math.floor(root))
//            return "NO";
//        else return "YES";
//    }
//    return  "NO";
//    }

    static String isTPrime(int n){
        int c=0;
        for(int a=2;a<n;a++)
        {
            if(n%a==0)
            c++;
        }
        if(c==1)
            return "YES";
        else return "NO";
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();String[] res=new String[n]; int[] arr=new int[n];
        for(int a=0;a<n;a++)
        {arr[a]=s.nextInt();}
        for(int a=0;a<n;a++)
            res[a]=isTPrime(arr[a]);
        for(int a=0;a<n;a++)
        System.out.println(res[a]);
    }
}
