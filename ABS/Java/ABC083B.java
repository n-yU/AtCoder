import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int A = sc.nextInt();
        int B = sc.nextInt();
        int i,j,r=0;

        for(i=1; i<=N; i++) {
            String s = String.valueOf(i);
            String ar[] = s.split("");
            int x=0;
            for(j=0; j<s.length(); j++)
                x += Integer.parseInt(ar[j]);
            if(x>=A && x<=B)
                r += i;
        }

        System.out.println(r);
    }
}