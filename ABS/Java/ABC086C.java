import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int N=sc.nextInt(),i,t,x,y,l,nx=0,ny=0,nt=0;

        for(i=0; i<N; i++) {
            t = sc.nextInt()-nt;
            x = Math.abs(sc.nextInt()-nx);
            y = Math.abs(sc.nextInt()-ny);
            l = x+y;
            if(t<l || (t-l)%2 != 0)
                break;
            nx = x;
            ny = y;
            nt = t;
        }

        System.out.println((i==N) ? "Yes" : "No");
    }
}