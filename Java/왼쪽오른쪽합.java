package MailProgramming.Java;
/*
정수 배열이 주어졌을 때, 왼쪽과 오른쪽의 합이 같은 값이 되는 위치를 찾으시오.

즉, A라는 배열이 있다면 A[0] + … + A[i - 1]과 A[i + 1] + … + A[n]이 같은 값이 되는 i의 위치가 답이 됩니다.

만약 A[1] + … + A[n]이 0이라면 0도 답이 됩니다.

Input: [0, -3, 5, -4, -2, 3, 1, 0]

Output: [0, 3, 7]

 */

import java.util.ArrayList;
import java.util.List;

public class 왼쪽오른쪽합 {
    public static void main(String[] args) {
        int[] list = {0, -3, 5, -4, -2, 3, -4, 0};
        List<Integer> ary = new ArrayList<>();

        out:
        for (int i = 0; i < list.length / 2; ++i) {
            for (int j = i + 1; j < list.length - 1; ++j) {
                if (Check(list, i, j) == Check(list,j + 1, list.length)) {
                    ary.add(i);
                    ary.add(j);
                    ary.add(list.length - 1);
                    break out;
                }
            }
        }

        for (int k : ary) {
            System.out.print(k + " ");
        }
    }

    public static int Check(int[] list, int a, int b) {
        int sum = 0;

        for (int i = a; i < b; ++i) {
            sum += list[i];
        }

        return sum;
    }
}
