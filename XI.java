import java.util.ArrayList;
import java.util.Scanner;

public class XI {
    private static ArrayList<String> permutation_array = new ArrayList<>();
    private static final boolean FIRST = true;
    private static final boolean NOT_FIRST = false;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        permutations(scanner.nextLine(), new ArrayList<Integer>(), FIRST, "");
        for (String string : permutation_array) {
            System.out.println(string);
        }
    }

    public static ArrayList<String> permutations(String str, ArrayList<Integer> used_indexes, boolean first, String permutation_str) {
        if (permutation_str.length() + 1 == str.length()) {
            for (Integer i = 0; i < str.length(); i++) {
                if (used_indexes.contains(i)) {
                    continue;
                }
                permutation_array.add(permutation_str + "" + str.charAt(i));
                return permutation_array;
            }
        }
        ArrayList<String> leter_used = new ArrayList<>();
        for (Integer i = 0; i < str.length(); i++) {
            if (leter_used.contains(""+str.charAt(i)) || used_indexes.contains(i)) {
                continue;
            }
            leter_used.add(""+str.charAt(i));
            used_indexes.add(i);
            permutations(str,used_indexes,NOT_FIRST,permutation_str+""+str.charAt(i));
            used_indexes.remove(i);
        }
        return permutation_array;
    }
}
