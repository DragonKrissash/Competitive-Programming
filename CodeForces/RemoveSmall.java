import java.util.Scanner;
public class RemoveSmall {


    static void sort(int[] arr, int n) {
        for(int a=0;a<n;a++){
            for(int b=0;b<n-a-1;b++)
            {
                if(arr[b]>arr[b+1])
                {
                    int t=arr[b];arr[b]=arr[b+1];arr[b+1]=t;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for (int a = 0; a < t; a++) {
            int n = s.nextInt();
            int[] arr = new int[n];
            for (int b = 0; b < n; b++)
                arr[b] = s.nextInt();
            sort(arr, n);
            boolean y=true;
            for(int b=0;b<n-1;b++){
                if(arr[b+1]-arr[b]>1)
                {y=false;break;}
            }
            if(y)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
