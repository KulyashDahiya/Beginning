class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket_dict = { ')' : '(', '}' : '{', ']' : '['}
        for bracket in s:
            if bracket in bracket_dict.values():
                stack.append(bracket)
            elif bracket in bracket_dict.keys() :
                if not stack or stack.pop() != bracket_dict[bracket]:
                    return False
            else:
                return False

        return not stack