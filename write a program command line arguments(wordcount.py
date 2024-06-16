import sys

file=open(sys.argv[1],"r+")
wordcount={}
for word in file.read().split():
    if word not in wordcount:
        wordcount[word]=1
    else:
        wordcount[word]+=1
        print(word,wordcount)
        file.close()
