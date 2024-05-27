import java.util.Scanner;

public class Tram {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();int ent=0,exit=0,left=0,max=0;
        for(int a=0;a<n;a++){
            exit=s.nextInt();
            ent=s.nextInt();
            left=left-exit+ent;
            max=left>max? left:max;
        }
        System.out.println(max);
    }
}
