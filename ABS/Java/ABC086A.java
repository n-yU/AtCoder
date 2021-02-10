import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        String s;
        if((a*b)%2 == 0)
            s = "Even";
        else
            s = "Odd";
        System.out.println(s);
    }
}