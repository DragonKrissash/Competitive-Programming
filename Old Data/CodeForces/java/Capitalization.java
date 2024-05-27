import java.util.Scanner;

public class Capitalization {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String word=s.next();
        System.out.println(Character.toUpperCase(word.charAt(0))+word.substring(1));
    }
}
