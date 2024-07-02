class Group_Anagrams:
  def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
    result = list()
    myHash = dict()
    for word in strs:
      cur = ''.join(sorted(word))
      if cur in myHash:
        myHash[cur].append(word)
      else:
        myHash[cur] = [word]
    return myHash.values()