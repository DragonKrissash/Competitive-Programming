import java.util.Scanner;

public class divisibility_problem {

//    public static int numMoves(int a,int b){
//        int moves=1;
//        if(a%b==0)
//            return 0;
//        int high=a;
//        while(true){
//
//            if(++high%b==0) {
//                break;
//            }
//            else moves++;
//        }
//        return moves;
//    }


    public static int numMoves(int n,int m){
        if(n%m==0)
            return 0;
        int lowDiv=n/m;
        int highDiv=lowDiv+1;
        int moves=highDiv*m-n;
        return moves;
    }

    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();int[] arr=new int[t];
        for(int a=0;a<t;a++){
            arr[a]=numMoves(s.nextInt(),s.nextInt());
        }
        for (int a=0;a<t;a++)
        System.out.println(arr[a]);
    }
}
