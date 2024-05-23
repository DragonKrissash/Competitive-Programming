public class pattern {
    public static void main(String[] args) {
        for(int a=1;a<3;a++)
        {for(int b=1;b<=a;b++)
            System.out.print("*");
         for(int c=1;c<=2*(2-a)+1;c++)
             System.out.print(" ");
            for(int b=1;b<=a;b++)
                System.out.print("*");
            System.out.println();
        }

        for(int b=0;b<2;b++)
        {for(int a=0;a<5;a++)
            System.out.print("*");
        System.out.println();
    }
    }
}
