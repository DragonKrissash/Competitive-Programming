import java.util.Scanner;

public class matrix {

    void add(int arr1[][],int r1,int c1,int arr2[][],int r2,int c2){
        if(r1==r2 && c1==c2) {
            for (int a = 0; a < r1; a++)
                for (int b = 0; b < c1; b++)
                    arr1[a][b] = arr1[a][b] + arr2[a][b];
        }
        else
            System.out.println("Cannot be added");
    }

    void sub(int arr1[][],int r1,int c1,int arr2[][],int r2,int c2){
        if(r1==r2 && c1==c2) {
            for (int a = 0; a < r1; a++)
                for (int b = 0; b < c1; b++)
                    arr1[a][b] = arr1[a][b] - arr2[a][b];
        }
        else
            System.out.println("Cannot be subtracted");
    }

    void prod(int arr1[][],int r1,int c1,int arr2[][],int r2,int c2){
        int p=0;
        int prod[][]=new int[r1][c2];
        if(c1==r2){
            for(int r=0;r<r1;r++){
                for(int c=0;c<c2;c++){
                    p=0;
                    for(int a=0;a<c1;a++)
                        p=p+arr1[r][a]*arr2[a][c];
                    prod[r][c]=p;
                }
            }
        for(int a=0;a<r1;a++)
        {for(int b=0;b<c2;b++)
                System.out.print(prod[a][b]+" ");
            System.out.println();
        }
        }

        else
            System.out.println("Cannot be multiplied");
    }

    void power(int arr1[][],int n,int raise) {
        int pow[][] = new int[n][n];
        int p = 0;
        int temp[][]=new int[n][n];
        for (int a = 1; a <= raise; a++) {
            if(a==1)
            for (int r = 0; r < n; r++) {
                for (int c = 0; c < n; c++) {
                    p = 0;
                    for (int b = 0; b < n; b++)
                        p = p + arr1[r][a] * arr1[a][c];
                    pow[r][c] = p;
                }
            }
            else{
                temp=pow;
                for (int r = 0; r < n; r++) {
                    for (int c = 0; c < n; c++) {
                        p = 0;
                        for (int b = 0; b < n; b++)
                            p = p + temp[r][a] * arr1[a][c];
                        pow[r][c] = p;
                    }
                }
            }

        }
        for(int a=0;a<n;a++){
            for(int b=0;b<n;b++)
                System.out.print(pow[a][b]+" ");
            System.out.println();
        }
    }

    void self_mult(int arr1[][],int n){
        int temp[][]=new int[n][n];
        temp=arr1;
        
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
//        System.out.println("Enter the number of rows of matrix1: ");
//        int row1=s.nextInt();
//        System.out.println("Enter the number of cols of matrix1: ");
//        int col1=s.nextInt();
//        System.out.println("Enter the elements of matrix 1: ");
//        int mat1[][]=new int[row1][col1];
//        for (int a=0;a<row1;a++)
//            for(int b=0;b<col1;b++)
//                mat1[a][b]=s.nextInt();
//        System.out.println("Enter the number of rows of matrix2: ");
//        int row2=s.nextInt();
//        System.out.println("Enter the number of cols of matrix2: ");
//        int col2=s.nextInt();
//        System.out.println("Enter the elements of matrix 2: ");
//        int mat2[][]=new int[row2][col2];
//        for (int a=0;a<row2;a++)
//            for(int b=0;b<col2;b++)
//                mat2[a][b]=s.nextInt();
        matrix m=new matrix();
//        m.add(mat1,row1,col1,mat2,row2,col2);
//        for(int a=0;a<row1;a++)
//        {
//            for(int b=0;b<col1;b++)
//                System.out.print(mat1[a][b]+" ");
//            System.out.println();
//        }
//        m.prod(mat1,row1,col1,mat2,row2,col2);
        System.out.println("Enter the order of the matrix: ");
        int n=s.nextInt();
        int mat[][]=new int[n][n];
        System.out.println("Enter the elements of matrix: ");
        for(int a=0;a<n;a++)
            for(int b=0;b<n;b++)
                mat[a][b]=s.nextInt();
        System.out.println("Enter the power to raise: ");
        int raise=s.nextInt();
        m.self_mult(mat,n);
    }

}
