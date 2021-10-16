public class Solution {
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    public int binarySearch(int[] nums, int target) {
        int result = -1;

        if (nums == null)
            return result;

        int start = 0;
        int end = nums.length - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            int val = nums[mid];

            if (val > target)
                end = mid - 1;
            else if (val < target)
                start = mid + 1;
            else
                end = mid;
        }

        if (nums[end] == target)
            result = end;

        return result;
    }
}