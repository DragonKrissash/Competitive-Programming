import java.util.Scanner;


public class WayTooLongWords {

    static void StringMani(String word){

    }

    public static void main(String[] args){
        Scanner s= new Scanner(System.in);
        int n=s.nextInt();
        for(int a=0;a<n;a++)
        {   String word=s.next();
            if(word.length()<10){
                System.out.println(word);
            }
            else{
                String newword=word.charAt(0)+Integer.toString(word.length()-2)+word.charAt(word.length()-1);
                System.out.println(newword);
            }

        }
    }
}
