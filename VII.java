import java.util.ArrayList;

public class VII {
    public static void main(String[] args) {
        Integer[] ar = {2,5,9,4,10,5};
        ArrayList<Integer> ar_l = new ArrayList<>();

        for (int i = 0; i < ar.length; i++) {
            ar_l.add(ar[i]);
        }

        System.out.println(somatorio(ar_l));

    }

    public static Integer somatorio(ArrayList<Integer> ar) {
        if (ar.size() == 0) {
            return 0;
        }
        Integer current_number = ar.remove(ar.size() - 1);
        return somatorio(ar) + current_number;
    }
}
