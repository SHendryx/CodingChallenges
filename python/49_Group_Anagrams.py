class Group_Anagrams:
  def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
    myHash = dict()
    for word in strs:
      cur = ''.join(sorted(word))
      if cur in myHash:
        myHash[cur].append(word)
      else:
        myHash[cur] = [word]
    return myHash.values()