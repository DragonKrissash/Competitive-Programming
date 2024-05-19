import java.util.Scanner;

public class Young_Physicist {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();int sumx=0,sumy=0,sumz=0;

        for(int a=1;a<=n;a++){
            int x=s.nextInt(),y=s.nextInt(),z=s.nextInt();
            sumx+=x;sumy+=y;sumz+=z;
        }
        if(sumx==sumy && sumy==sumz && sumz==0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
