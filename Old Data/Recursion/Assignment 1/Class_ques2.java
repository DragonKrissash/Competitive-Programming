import java.util.Scanner;

public class Class_ques2 {
    public static void main(String[] args) {
        Scanner  s=new Scanner(System.in);
        System.out.println("Enter the number of elements of 1st array: ");
        int n1= s.nextInt();
        System.out.println("Enter the elements of 1st array: ");
        int[]arr1=new int[n1];
        for(int a=0;a<n1;a++)
            arr1[a]=s.nextInt();
        System.out.println("Enter the number of elements of 2nd array: ");
        int n2= s.nextInt();
        System.out.println("Enter the elements of 2nd array: ");
        int[]arr2=new int[n2];
        for(int a=0;a<n2;a++)
            arr2[a]=s.nextInt();

        int[] arrf=new int[n1+n2];
        int ind=0;
        for(int a=0,b=0;a<n1 || b<n2;) {
            if (a == n1)
                arrf[ind++] = arr2[b++];
             else if (b == n2)
                arrf[ind++] = arr1[a++];
             else {
                if (arr1[a] < arr2[b])
                    arrf[ind++]=arr1[a++];
                else
                    arrf[ind++]=arr2[b++];

            }
        }
        System.out.println("The final array: ");
        for (int a=0;a<n1+n2;a++)
            System.out.print(arrf[a]+" ");

    }
}
