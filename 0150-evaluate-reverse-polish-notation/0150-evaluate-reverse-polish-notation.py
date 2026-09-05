class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        operator = ['+', '-', '*', '/']
        for i in tokens:
            if i not in operator:
                stack.append(int(i))
            else:
                k = stack.pop()
                l = stack.pop()
                if i == "+":
                    stack.append(l + k)
                elif i == "-":
                    stack.append(l - k)
                elif i == "*":
                    stack.append(l * k)
                elif i == "/":
                    stack.append(int(l / k))
        return stack.pop()