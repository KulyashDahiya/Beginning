# def addDigits(num: int) -> int:
#     s = str(num)
#     c = 1
#     while c:
#         a = [int(digit) for digit in s]
#         sum = 0
#         for i in a:
#             sum += i
#         if len(str(sum)) == 1:
#             return sum
#         else:
#             s = str(sum)
#
# num = int(input("Enter a number: "))
# print(addDigits(num))

class Solution:
    def addDigits(self, num: int) -> int:
        if num == 0: return 0
        if num % 9 == 0: return 9
        else: return (num%9)