import java.util.*;

class Main {
    static String[] T = {
        "eraser", "erase",
        "dreamer", "dream"
    };

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();

        for(String str : T)
            S = S.replaceAll(str, "#");
      	S = S.replaceAll("#", "");

        System.out.println((S.length()==0) ? "YES" : "NO");
    }
}