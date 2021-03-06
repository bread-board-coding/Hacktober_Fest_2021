public class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
        next = null;
    }
}

/**
 * Definition for ListNode
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

public class Solution {
    /**
     * @param l1: ListNode l1 is the head of the linked list
     * @param l2: ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode current = head;

        while(l1 != null && l2 != null) {
            if (l1.val < l2.val) {
                current.next = new ListNode(l1.val);
                l1 = l1.next;
            } else {
                current.next = new ListNode(l2.val);
                l2 = l2.next;
            }

            current = current.next;
        }
        
        while(l1 != null) {
            current.next = new ListNode(l1.val);
            l1 = l1.next;
            current = current.next;
        }

        while(l2 != null) {
            current.next = new ListNode(l2.val);
            l2 = l2.next;
            current = current.next;
        }

        return head.next;
    }
}

public class helper {
    static void outputArray(ListNode node) {
        StringBuilder strB = new StringBuilder();

        while (node != null) {
            if (strB.length() > 0)
                strB.append("->");

            strB.append(node.val);

            node = node.next;
        }

        if (strB.length() > 0)
            strB.append("->");

        strB.append("null");

        System.out.println(strB.toString());
    }

    public static void main(String[] args) {
        Solution solution = new Solution();

        ListNode list1 = new ListNode(5);
        ListNode list2 = new ListNode(6);

        helper.outputArray(solution.mergeTwoLists(list1, list2));
    }
}
