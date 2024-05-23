import java.util.Scanner;

public class Word {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String word=s.next();
        int upp=0,low=0;
        for(int a=0;a<word.length();a++){
            if(Character.isUpperCase(word.charAt(a)))
                upp++;
            else low++;
        }
        if(upp>low)
            System.out.println(word.toUpperCase());
        else
            System.out.println(word.toLowerCase());
    }
}
