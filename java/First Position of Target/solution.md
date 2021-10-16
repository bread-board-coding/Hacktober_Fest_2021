在一个有序数组中找到某个数字出现的第一个位置。
###
依然是二分查找。但是找到匹配项不算完。还要继续找。此类题目比较标准的问法是找第一个，还是最后一个。区别在于当nums[mid] == target时，如果找第一个，就end = mid。此时target肯定会是end或者end的左侧，因此只会移动start。end再动的时候，只有当mid的值再次为target时。所以最终start和end相遇的时候，start的位置如果是target，那么start就是结果。
###
Last Position不太一样。首先如果相等，start = mid。其次由于除以二取整问题（下取整），start+ 1=end时就应该结束，然后先后判断end和start是不是符合target。此时要注意start是否越过上边界(length)和end是否越过下边界(0)。