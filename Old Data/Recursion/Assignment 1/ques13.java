import java.util.Scanner;

public class ques13 {
    static int countNum(int[] arr,int ind,int len,int num){
        if(ind==len)return 0;
        else {
            if(arr[ind]==num)
                return 1+countNum(arr,ind+1,len,num);
            else return countNum(arr,ind+1,len,num);
        }
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of integers: ");
        int n=s.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int a=0;a<n;a++)
            arr[a]=s.nextInt();
        System.out.println("Enter the number to check occurance: ");
        int num=s.nextInt();
        System.out.println("The occurance of the number is: "+countNum(arr,0,arr.length,num));
    }
}
