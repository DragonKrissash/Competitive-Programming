import java.util.Scanner;

public class MakeBeautiful {
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
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        for(int a=0;a<t;a++){
            int n=s.nextInt();
            int[]arr=new int[n];
            for(int b=0;b<n;b++)
                arr[b]=s.nextInt();
            int b=0;boolean y=true;
                int sum=arr[b];
                for( b=1;b<n;b++)
                { if(sum==arr[b])
                    {y=false;
                    break;}
                    sum=sum+arr[b];
                }
                if(y) {
                    System.out.println("YES");
                    for ( b = 0; b < n; b++)
                        System.out.print(arr[b]+" ");
                }
                else{
                    sort(arr,n);
                    if(arr[0]==arr[1])
                        System.out.println("NO");
                    else {
                        System.out.println("YES");
                        for(b=0;b<n;b++)
                            System.out.print(arr[b]+" ");
                    }
                }
            }
        }

    }

