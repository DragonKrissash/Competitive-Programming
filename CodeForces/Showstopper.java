import java.util.Scanner;

public class Showstopper {

    static void func(int[] arr1,int[] arr2,int n){
        int l1=arr1[n-1],l2=arr2[n-1];boolean y=true;
        for(int a=0;a<n-1;a++){
            if((arr1[a]<=l1 && arr2[a]<=l2)||(arr2[a]<=l1 && arr1[a]<=l2))
                continue;
                else
                {y=false;break;}
        }
        if(y)
            System.out.println("YES");
        else System.out.println("NO");
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        for(int a=0;a<t;a++){
            int n=s.nextInt();
            int[] arr1=new int[n];
            int[] arr2=new int[n];
            for(int b=0;b<n;b++)
                arr1[b]=s.nextInt();
            for(int b=0;b<n;b++)
                arr2[b]=s.nextInt();
            func(arr1,arr2,n);
        }
    }
}
