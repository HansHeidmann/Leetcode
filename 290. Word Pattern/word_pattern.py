class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        words_dict = {}
        letters_dict = {}
        for i in range(0, len(pattern)):
            if not pattern[i] in letters_dict:
                letters_dict[pattern[i]] = words[i]
                words_dict[words[i]] = pattern[i]
            else: # if the letter has been used
                
        print(words_dict)
        
        return True

        
