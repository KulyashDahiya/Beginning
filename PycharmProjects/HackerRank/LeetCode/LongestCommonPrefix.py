class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        m_string = min(strs, key=len)
        l = len(m_string)
        res = ""
        for i in range(l):
            for s in strs:
                if m_string[i] != s[i]:
                    return res
            res += m_string[i]

        return res

## Other way (only work for leetcode specific question

        # ans = ""
        # lis = sorted(strs)
        # first = lis[0]
        # last = lis[-1]
        # for i in range(min(len(first), len(last))):
        #     if (first[i] != last[i]):
        #         return ans
        #     ans += first[i]
        # return ans




# strs = ["leelo", "leetcode", "leet", "lethere"]
# m_string = min(strs, key=len)
# m_len = len(m_string)
# print(m_len)
#
# s = ""
#
# strs1 = ["leelo", "leetcode", "lethere"]
# for i in range(m_len-1):
#     for j in strs:
#         if m_string[i] != j[i]:
#             print(s)
#             break
#     s += m_string[i]




