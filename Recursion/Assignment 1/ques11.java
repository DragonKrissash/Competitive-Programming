import java.util.Scanner;

public class ques11 {
    static String rev(String word,int start,int end){
        if(start==end)
            return "";
        return rev(word,start+1,end)+word.charAt(start);
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a word to check palindrome: ");
        String word=s.next();
        if(word.equalsIgnoreCase(rev(word,0,word.length())))
            System.out.println("Yes it is palindrome");
        else
            System.out.println("No it is not palindrome");
    }
}
