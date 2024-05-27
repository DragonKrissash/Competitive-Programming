import java.util.ArrayList;
import java.util.Scanner;

public class Noldbach {

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int num=s.nextInt();
        ArrayList<Integer> primArr=new ArrayList<>();
        boolean[] isPrime=new boolean[n+1];
        for(int a=1;a<=n;a++){
            isPrime[a]=true;
        }
        int count=0;
        for(int a=2;a<=n;a++)
            if(isPrime[a])
            {   primArr.add(a);
                count++;
                for(int b=a*a;b<=n;b+=a)
                    isPrime[b]=false;
            }
        int found=0;
       for(int a=0;a<count;a++){
        if(a==0 || a==1)
            continue;
        else {
            int check=primArr.get(a-2)+primArr.get(a-1)+1;
            if(check<=n && isPrime[check])
                found++;
        }
       }
        if(found==num)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
