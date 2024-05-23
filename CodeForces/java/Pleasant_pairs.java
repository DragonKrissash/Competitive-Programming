import java.util.Scanner;

public class Pleasant_pairs {

    public static int funcarr(int[] arr,int n){
        int c=0;int m=1;
        for(int a=0;a<n;a++){
                int pos=arr[a]-(a+1);
//            System.out.println("pos "+pos);
            if(pos<0 || pos >n)
                break;
                if(arr[pos-1]*arr[a]==(a+pos+1))
                    c++;
        }
        return c;
    }

    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();int[] resArr=new int[t];
        for(int a=0;a<t;a++){
            int n=s.nextInt();
            int[] arr=new int[n];
            for(int b=0;b<n;b++){
                arr[b]=s.nextInt();
            }
            resArr[a]=funcarr(arr,n);
        }
        for(int a=0;a<t;a++)
            System.out.println(resArr[a]);
    }
}
