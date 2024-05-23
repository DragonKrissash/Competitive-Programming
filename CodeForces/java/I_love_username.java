import java.util.Scanner;

public class I_love_username {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();int max=0,min=0,inp;int good=0;
        for(int a=0;a<n;a++){
            if(a==0){
                inp=s.nextInt();
                max=inp;min=inp;
            }
            else{
                inp=s.nextInt();
                if(inp>max){
                    max=inp;good++;
                }
                if(inp<min){
                    min=inp;good++;
                }
            }
        }
        System.out.println(good);
    }
}
