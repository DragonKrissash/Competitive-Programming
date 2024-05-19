import java.util.Scanner;

public class Arival_of_theGeneral {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] arr=new int[n];
        for(int a=0;a<n;a++){
            arr[a]=s.nextInt();
        }
        int min=0,max=n-1;
        for(int a=0;a<n;a++)
            if(arr[a]<=arr[min])
                min=a;
            else if(arr[a]>=arr[max])
                max=a;
            else
                continue;
//        int temp=arr[0];arr[0]=arr[min];arr[min]=temp;
        int moves=max+Math.abs(n-1-min);
        moves=min<max? moves-1:moves;
        System.out.println(moves);

    }
}
