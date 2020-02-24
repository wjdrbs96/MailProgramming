package MailProgramming.Java;

/*
정수 배열이 주어졌을 때, 배열의 원소의 값을 자신을 제외한 다른 원소들의 곱으로 변경하시오.

단, 나누기 연산은 수행하지 않습니다.

Input: [1, 2, 3, 4, 5]

Output: [120, 60, 40, 30, 24]

Input: [5, 3, 4, 2, 6, 8]

Output: [1152, 1920, 1440, 2880, 960, 720]

 */

public class 자신을제외하고곱하기 {
    public static void main(String[] args) {
        int[] list = {1,2, 3, 4, 5};
        int[] result = new int[list.length];

        for (int i = 0; i < list.length; ++i) {
            int sum = 1;
            for (int j = 0; j < list.length; ++j) {
                if (i == j) continue;
                sum *= list[j];
            }
            result[i] = sum;
        }

        for (int k : result) {
            System.out.print(k + " ");
        }
    }
}
