import java.util.Scanner;

public class stones_on_table {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        String word=s.next();
        char[] wordarr=word.toCharArray();
        int c=0;
        for(int a=0;a< wordarr.length-1;a++){
            if(wordarr[a]==wordarr[a+1])
                c++;
        }
        System.out.println(c);
    }
}
