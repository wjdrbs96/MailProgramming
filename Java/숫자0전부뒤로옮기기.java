package MailProgramming.Java;

import java.util.ArrayList;
import java.util.List;

public class 숫자0전부뒤로옮기기 {
    public static void main(String[] args) {
        int[] list = {6, 0, 8, 2, 3, 0, 4, 0, 1};
        int count = 0;
        List<Integer> ary = new ArrayList<>();

        for (int i = 0; i < list.length; ++i) {
            if (list[i] != 0) ary.add(list[i]);
            else count++;
        }

        for (int i = 0; i < ary.size(); ++i) {
            list[i] = ary.get(i);
        }

        for (int i = ary.size(); i < list.length; ++i) {
            list[i] = 0;
        }

        for (int i = 0; i < list.length; ++i) {
            System.out.print(list[i] + " ");
        }
    }
}
