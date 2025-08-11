import java.util.InputMismatchException;

public class VI {
    public static void main(String[] args) {
        System.out.println(convBase2(Integer.parseInt(args[0])));
    }

    public static String convBase2(int n) {
        if (n < 0) {
            throw new InputMismatchException();
        }
        else if (n <= 1) {
            return "" + n;
        }
        
        return convBase2(n/2) + "" + n%2;
    }
}