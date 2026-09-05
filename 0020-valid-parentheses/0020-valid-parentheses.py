class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        opening = ['(', '{', '[']
        closing = [')', '}', ']']
        for i in range(len(s)):
            if s[i] in opening:
                stack.append(s[i])
            elif s[i] in closing:
                if not stack:
                    return False
                top = stack.pop()
                if top == '(' and s[i] != ')':
                    return False
                elif top == '{' and s[i] != '}':
                    return False
                elif top == '[' and s[i] != ']':
                    return False
        return len(stack) == 0