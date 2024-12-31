class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        modifiedString = ""
        j = 0
        for i in range(len(s)):
            if j < len(spaces) and i == spaces[j]:
                modifiedString += " "
                j += 1
            modifiedString += s[i]
        return modifiedString