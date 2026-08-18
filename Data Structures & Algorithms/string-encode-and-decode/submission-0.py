class Solution:

    def encode(self, strs: List[str]) -> str:
        result = ""

        for s in strs:
            result += s
            result += ';'
        
        return result

    def decode(self, s: str) -> List[str]:
        l = []
        start = 0

        for i, c in enumerate(s):
            if c == ';':
               l.append(s[start:i])
               start = i + 1


        return l
