import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int Y = sc.nextInt();
        int i,j,a=-1,b=-1,c=-1;

        for(i=0; i<=N; i++)
            for(j=0; j<=N-i; j++)
                if(10000*i+5000*j+1000*(N-i-j) == Y) {
                    a=i; b=j; c=N-i-j;
                    break;
                }
        
        System.out.println(a + " " + b + " " + c);
    }
}
