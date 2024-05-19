//import java.util.Scanner;
//
//public class pattern2 {
//    public static void main(String[] args) {
//        Scanner s=new Scanner(System.in);
//        int n;
//        System.out.println("Enter the order of the matrix: ");
//        n=s.nextInt();
//        System.out.println("Enter the elements of the matrix: ");
//        int[][] mat=new int[n][n];
//        for (int a=0;a<n;a++)
//            for(int b=0;b<n;b++)
//                mat[a][b]=s.nextInt();
//        int row=n,col=n;int i=0,j=0;int r=0,c=n-1,move=0;
//        int[][] resarr=new int[n][n];
//        while(row>0 && col>0){
//            //top to down
//            move=0;
//            while(move<row){
//                resarr[r++][c]=mat[i][j++];
//                move++;
//            }
//
//            //right to left
//            move=0;r-=1;col-=1;j-=1;c-=1;i+=1;
//            while (move<col){
//                resarr[r][c--]=mat[i++][j];
//                move++;
//            }
//            //down to up
//            move=0;c+=1;r-=1;row-=1;i-=1;j-=1;
//            while (move<row){
//                resarr[r--][c]=mat[i][j--];
//                move++;
//            }
//            //up to right
//            move=0;col-=1;r+=1;c+=1;j+=1;i-=1;
//            while (move<row){
//                resarr[r][c++]=mat[i--][j];
//                move++;
//            }
//            move=0;r+=1;c-=1;row-=1;j+=1;i+=1;
//
//        }
//        for (int a=0;a<n;a++)
//        {for(int b=0;b<n;b++)
//                System.out.print(resarr[a][b]+" ");
//        System.out.println();}
//    }
//}

import java.util.Scanner;

public class pattern2{

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the order of matrix: ");
        int n=s.nextInt();
        System.out.println("Enter the elements of the matrix: ");
        int[][] mat=new int[n][n];
        for (int a=0;a<n;a++)
            for(int b=0;b<n;b++)
                mat[a][b]=s.nextInt();
        for(int a=0;a<n;a++)
            for(int b=0;b<n;b++) {
                int temp=mat[a][b];
                mat[a][b]=mat[b][a];
                mat[b][a]=temp;
            }
        for (int a=0;a<n;a++)
        {for(int b=0;b<n;b++)
            System.out.print(mat[a][b]+" ");
            System.out.println();}

    }
}