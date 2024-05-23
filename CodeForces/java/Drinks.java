import java.util.Scanner;

public class Drinks {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        double sum=0;
        for(int a=0;a<n;a++){
            sum=sum+s.nextDouble()/100.0;
        }
        sum=(sum/n)*100;
        System.out.println(sum);
    }
}
