import java.util.Scanner;

public class ques9 {

    static String cleanWord(String word,char c1,char c2,int ind,int len){
        if(ind+1!=len) {
            if (c1 == c2)
                return cleanWord(word, c1,word.charAt(ind+1),ind+1,len);
            else
                return c1 + cleanWord(word,c2,word.charAt(ind+1),ind,len);
        }
        else return "";
    }

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a string to remove the duplicates from side: ");
        String word=s.next();
        String clean_word=cleanWord(word,word.charAt(0),word.charAt(1),1,word.length());
        System.out.println("The cleaned word is: "+clean_word);
    }
}
