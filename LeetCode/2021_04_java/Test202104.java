import java.util.ArrayList;
import java.util.List;

public class Test202104 {
    public static void SingleElementInASortedArrayTest() {
        SingleElementInASortedArray test0 = new SingleElementInASortedArray();
        SingleElementInASortedArray test1 = new SingleElementInASortedArray();
        SingleElementInASortedArray test2 = new SingleElementInASortedArray();
        SingleElementInASortedArray test3 = new SingleElementInASortedArray();

        int[] nums0 = {1,1,2,3,3,4,4,8,8};
        int[] nums1 = {3,3,7,7,10,11,11};
        int[] nums2 = {1,2,2,3,3};
        List<Integer> temp = new ArrayList<>();

        for (int i = 1; i < 10001; ++i) {
            if (i == 4325) {
                temp.add(i);
            } else {
                temp.add(i);
                temp.add(i);
            }
        }

        int[] nums3 = temp.stream().mapToInt(i->i).toArray();

        int ans0 = test0.singleNonDuplicate(nums0);
        int ans1 = test1.singleNonDuplicate(nums1);
        int ans2 = test2.singleNonDuplicate(nums2);
        int ans3 = test3.singleNonDuplicate(nums3);

        System.out.println(ans0); // 2
        System.out.println(ans1); // 10
        System.out.println(ans2); // 1
        System.out.println(ans3); // 4325
    }

    public static void MaximumSubArrayTest() {
        MaximumSubArray test0 = new MaximumSubArray();
        MaximumSubArray test1 = new MaximumSubArray();
        MaximumSubArray tset2 = new MaximumSubArray();

        int[] nums0 = {-2,1,-3,4,-1,2,1,-5,4};
        int[] nums1 = {1};
        int[] nums2 = {5,4,-1,7,8};

        int ans0 = test0.maxSubArray(nums0);
        int ans1 = test0.maxSubArray(nums1);
        int ans2 = test0.maxSubArray(nums2);

        System.out.println(ans0); // 6
        System.out.println(ans1); // 1
        System.out.println(ans2); // 23
    }

    public static void SingleNumberTest() {
        SingleNumber test0 = new SingleNumber();
        SingleNumber test1 = new SingleNumber();
        SingleNumber test2 = new SingleNumber();

        int[] nums0 = {2,2,1};
        int[] nums1 = {4,1,2,1,2};
        int[] nums2 = {1};

        int ans0 = test0.singleNumber(nums0);
        int ans1 = test1.singleNumber(nums1);
        int ans2 = test2.singleNumber(nums2);

        System.out.println(ans0); // 1
        System.out.println(ans1); // 4
        System.out.println(ans2); // 1

    }
    public static void main(String[] args) {
        //SingleElementInASortedArrayTest();
        //MaximumSubArrayTest();
        SingleNumberTest();
    }
}