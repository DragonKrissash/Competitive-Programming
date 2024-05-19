import java.util.Scanner;
public class Beautiful_year {

    public static boolean hasReapeated(int year){
        String yearstr=Integer.toString(year);
        for(int a=0;a<4;a++){
            for(int b=a+1;b<4;b++)
                if(yearstr.charAt(a)==yearstr.charAt(b))
                    return true;
        }
        return false;
    }

    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int year=s.nextInt();
        int temp=++year;
        while(true){
            if(!hasReapeated(temp))
                break;
            temp++;
        }
        System.out.println(temp);
    }
}
