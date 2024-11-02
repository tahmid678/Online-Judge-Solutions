class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        words = sentence.split(" ")
        length = len(words)
        result = True
        for i in range(0, length - 1):
            j = len(words[i]) - 1
            if words[i][j] != words[i + 1][0]:
                result = False
                return result
        first = words[0]
        last = words[len(words) - 1]
        if first[0] != last[len(last) - 1]:
            result = False
        return result