import java.util.Scanner;

public class Borze {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String code=s.next();
        String decode="";
        char c;
        for(int a=0;a<code.length();a++){
            c=code.charAt(a);
            if(c=='-')
            {
                if(code.charAt(a+1)=='.')
                {decode=decode+"1";a=a+1;}
                else
                {decode=decode+"2";a=a+1;}
            }
            else
                decode=decode+"0";
        }
        System.out.println(decode);
    }
}
