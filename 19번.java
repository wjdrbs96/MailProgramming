package Mailprogramming;
/*
정렬되지 않은 정수 배열과 정수 S가 주어졌을 때, 합이 S가 되는 정수 배열 내의 두 수를 찾으시오.

Input: 정수 배열 = [8, 7, 2, 5, 3, 1], S = 10

Output: 인덱스 0 과 2 (8 + 2) 또는 인덱스 1 과 4 (7 + 3)
 */
import java.util.Scanner;

public class SumArray {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int s = input.nextInt();

        int n[] = {8, 7, 2, 5, 3, 1};
        for(int i = 0; i < n.length; i++){
            for(int j =0; j < n.length; j++){
                if(s == (n[i] + n[j])){
                    if(j <=i) continue;
                    System.out.println(i +" " + j);
                }
            }
        }


    }
}
