import java.util.Scanner;

public class Beautiful_matrix {
    public static void main(String[] args){
        int[][] arr=new int[5][5];
        Scanner s=new Scanner(System.in);
        for(int a=0;a<5;a++)
        for(int b=0;b<5;b++)
            arr[a][b]=s.nextInt();
        int r=0,c=0;
        outer:
        for(r=0;r<5;r++)
        for(c=0;c<5;c++)
            if (arr[r][c]==1)
                break outer;
        int moves=Math.abs(r-2)+Math.abs(c-2);
        System.out.println(moves);

    }
}
