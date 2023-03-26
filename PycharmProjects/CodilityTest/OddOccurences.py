#  XOR LOGIC

# def solution(A):
#     num = 0
#
#     for i in range(len(A)):
#         num = num ^ A[i]
#
#     return num


# Using Set
def solve(t):
  s = set()
  for v in t:
    s.add(v) if v not in s else s.remove(v)
  return list(s)