//public class classtest {
//
//    static void num(int y){
//        if(y==0)
//            return;
//        num(y-1);
//        System.out.println(y);
//    }
//
//    static int sumdig(int n){
//        if(n<0)
//            n=-n;
//        if(n==0)
//            return 0;
//        else
//            return (n%10)+sumdig(n/10);
//    }
//
//    static int count(int n){
//        if(n==0)
//            return 0;
//        else
//            return 1+count(n/10);
//    }
//
//    static int rev(int n,int digs){
//        if(n==0)
//            return 0;
//        else
//            return (int)((n%10)*Math.pow(10,digs))+rev(n/10,digs-1);
//    }
//
//    static int pow(int x,int y){
//        if(y==0)
//            return 1;
//        else
//            return x*pow(x,y-1);
//    }
//
//    static int powmod(int x,int y,int m){
//
//    }
//
//    public static void main(String[] args) {
//        System.out.println(rev(123,count(123)-1));
//        System.out.println(sumdig(-123));
//        System.out.println(pow(2,5));
//        System.out.println(powmod(3,4,7));
//    }
//}
