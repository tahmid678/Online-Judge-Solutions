class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        sentenceList = sentence.split(" ")
        index = -1
        for i in range(len(sentenceList)):
            if sentenceList[i].startswith(searchWord):
                index = i + 1
                break
        return index