import java.util.Scanner;

public class Team {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(); int sure=0;
        for(int a=0;a<n;a++)
        {
            int d=s.nextInt(),b=s.nextInt(),c=s.nextInt();
            int sum=d+b+c;
            if(sum>1)
                sure++;
        }
        System.out.println(sure);
    }
}
