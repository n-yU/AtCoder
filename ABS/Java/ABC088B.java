import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i,N=sc.nextInt(),al=0,bb=0;
        Integer a[] = new Integer[N];
        for(i=0; i<N; i++)
            a[i] = sc.nextInt();
        Arrays.sort(a, Comparator.reverseOrder());

        for(i=0; i<N; i++) {
            if(i%2 == 0)
                al += a[i];
            else
                bb += a[i];
        }

        System.out.println(al-bb);
    }
}