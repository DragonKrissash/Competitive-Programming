import java.util.Scanner;

public class Class_ques1 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n=s.nextInt();
        int[]arr=new int[n+1];
        System.out.println("Enter the elements: ");
        for (int a=0;a<n;a++)
            arr[a]=s.nextInt();
        arr[n]=0;
        System.out.println("Enter the element to be inserted: ");
        int num=s.nextInt();int ind=0;
        for(int a=n-1;a>=0;a--){
            if(arr[a]<=num)
            {ind=a+1;
            break;}
        }
        for(int a=n;a>ind;a--)
            arr[a]=arr[a-1];
        arr[ind]=num;
        System.out.println("The sorted array: ");
        for (int a=0;a<=n;a++)
            System.out.print(arr[a]+" ");
    }
}
