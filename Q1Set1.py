def groupAnagrams(words):
    #angram with zero index
    anagrams = []
 
    # base condition if element in words is 0
    if not words:
        return anagrams

    nums = [''.join(sorted(word)) for word in words]
    #print(nums)
 
    d = {}
    for i, e in enumerate(nums):
        d.setdefault(e, []).append(i)
    #print(d)
 
    for index in d.values():
        collection = tuple(words[i] for i in index)
        if len(collection) > 1:
            anagrams.append(collection)
 
    return anagrams
 
 
words = ['CARS', 'REPAID', 'DUES', 'NOSE', 'SIGNED', 'LANE', 'PAIRED', 'ARCS','GRAB', 'USED', 'ONES', 'BRAG', 'SUED', 'LEAN', 'SCAR', 'DESIGN']
 
anagrams = groupAnagrams(words)
for anagram in anagrams:
    print(anagram)
