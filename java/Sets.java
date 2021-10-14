import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class Sets {
    public static void main(String[] args) {
        /*A set is list of unique elements that are unordered and
        cannot contain duplicates  */
        Set<Integer> h = new HashSet<>();
        h.add(5);
        h.add(8);
        h.add(-8);
        h.add(4);
        int hashSize = h.size();
        boolean x = h.contains(6);
        System.out.println(x);
        System.out.println(h);
        System.out.println("The number of elements in the hash set is: " + hashSize);
        System.out.println();


        /* A treeSet is similar to a set, where you can only have unique elements
         * that are ordered in a tree form.  */
        java.util.Set<Integer> T = new TreeSet<>();
        T.add(7);
        T.add(5);
        T.add(11);
        int treeSize = T.size();
        System.out.println(T);
        System.out.println("The number of elements in the tree set is: " + treeSize);
        System.out.println();

        /* A linkedHashSet is similar to a set, where you can only have unique elements
         * that are not ordered but are way faster in operation.  */
        java.util.Set<Integer> L = new LinkedHashSet<>();
        L.add(7);
        L.add(5);
        L.add(12);
        L.add(11);
        int linkedSize = L.size();
        System.out.println(L);
        System.out.println("The number of elements in the LinkedHashSet is: " + linkedSize);
        System.out.println();

    }
}
