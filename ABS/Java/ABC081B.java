import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,N=sc.nextInt(),b=0;
        for(i=0; i<N; i++)
            b |= sc.nextInt();
        System.out.println(Integer.numberOfTrailingZeros(b));
    }
}