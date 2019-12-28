"""
랜덤한 정수 배열이 주어지면 중복된 원소의 값을 모두 프린트 하시오. 단, 공간복잡도 O(1)이여야 합니다.

Given an integer array, print all non unique elements.

input: [0, 6, 3, 4, 0]

output: 0


input: [5, 4, 3, 2, 1, 1, 1, 1, 1, 2]

output: 1, 2
"""

def printall(arr):
    arr.sort();
    last_n = None;
    for i in range(len(arr)-1):
        if arr[i] == arr[i+1] and arr[i] != last_n:
            last_n = arr[i]
            print(arr[i])



arr = [0,0,0,1,1,0,0,0,2,2,3,4,4,4]
printall(arr);