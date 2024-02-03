#Using Linear Search

def findSquareRootL(x):
    for i in range(1, x):
        i = i+1
        ans = i
        ans = ans * ans
        if ans == x:
            return i

    return 0

#Using Binary Search
class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0
        first, last = 1, x
        while first<=last:
            mid = (first + last) // 2
            ans = mid*mid
            if ans == x:
                return mid
            elif ans<x:
                if (mid+1) * (mid + 1) > x:
                    return mid
                first = mid+1
            else:
                last = mid-1
        return 0



    print("Square Root in Float")

x = int(input("Enter a Number: "))
findSquareRoot(x)