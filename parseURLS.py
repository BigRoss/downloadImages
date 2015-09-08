import os
import urllib.request

txt = open('C:\\Users\\Alex\\Desktop\\bgs.txt', 'r')
write = open('C:\\Users\\Alex\\Desktop\\bgs2.txt', 'w')

for line in txt:
	newLine = (line.split("=\"")[1]).split("\"")[0]
	write.write(newLine + "\n")
write.close()
txt.close()