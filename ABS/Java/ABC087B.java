import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int X = sc.nextInt();
        int i,j,x=0,r;

        for(i=0; i<=A; i++)
            for(j=0; j<=B; j++) {
                r = X-i*500-j*100;
                if(r%50==0 && r/50<=C && r/50>=0)
                    x++;
            }

        System.out.println(x);
    }
}