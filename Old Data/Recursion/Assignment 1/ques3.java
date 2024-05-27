import java.util.Scanner;

public class ques3 {
    static String rev(String word,int start,int end){
        if(start==end)
        return "";
        return rev(word,start+1,end)+word.charAt(start);
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String word=s.next();
        System.out.println(rev(word,0,word.length()));
    }
}
