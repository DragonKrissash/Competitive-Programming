import java.util.Scanner;

public class InsomniaCure {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int [] arr=new int[4];
        for(int a=0;a<4;a++)
            arr[a]=s.nextInt();
        int n=s.nextInt();int d=0;
        boolean[] isDivided=new boolean[n+1];
        for(int a=1;a<=n;a++)
            isDivided[a]=false;
        for(int a=0;a<4;a++){
            for(int b=arr[a];b<=n;b+=arr[a])
                if(isDivided[b]==false)
                {isDivided[b]=true;d++;}
        }
        System.out.println(d);
    }
}
