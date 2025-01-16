class Solution:
    def reverseWords(self, s: str) -> str:
        result = ""
        tokens = s.split()
        tokens.reverse()
        for i in range(len(tokens)):
            if i + 1 == len(tokens):
                result += tokens[i]
            else:
                result += tokens[i] + " "
        return result