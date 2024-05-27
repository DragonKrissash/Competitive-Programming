import java.util.Scanner;

public class QueueAtSchool {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();int t= s.nextInt();
        String queue=s.next();char[] word=queue.toCharArray();
        for(int b=1;b<=t;b++)
        {
            for(int c=0;c<n-1;c++){

                 if(word[c]=='B' && word[c+1]=='G'){
                    char temp=word[c];
                    word[c]=word[c+1];
                    word[c+1]=temp;
                    c++;
                }

            }
        }
        for (int a=0;a<n;a++){
            System.out.print(word[a]);
        }
    }
}
