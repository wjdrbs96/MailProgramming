package MailProgramming.Java;

/*중복된 원소가 있는 정수 배열이 주어졌을 때, 주요 원소를 찾으시오.

주요 원소는 배열 크기의 반을 초과하여 등장하는 원소입니다.

Input: [2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2]

Output: 2*/

import java.util.HashMap;
import java.util.Map;

public class 주요원소파악 {
    public static void main(String[] args) {
        Map<Integer, Integer> hm = new HashMap<>();


        int[] list = {1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2};

        for (int i = 0; i < list.length; ++i) {
            if (!hm.containsKey(list[i])) {
                hm.put(list[i], 1);
            } else {
                hm.put(list[i], hm.get(list[i]) + 1);
            }
        }

        for (int k : hm.keySet()) {
            if (hm.get(k) > list.length / 2) {
                System.out.println(k);
            }
        }
    }
}
