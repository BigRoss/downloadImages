import os
import urllib.request
from urllib.request import Request, urlopen


txt = open('bgs2.txt', 'r')

# Create the bgs folder to download the images:
dir = os.path.dirname(os.getcwd() + "\\bgs")
print(os.getcwd() + "\\bgs")
if not os.path.exists(dir):
	os.makedirs(dir)

i = 1
for line in txt:
	url = line
	req = Request(url, headers={'User-Agent': 'Mozilla/5.0'})
	filename = "bg" + str(i) + ".jpg"
	out_file = open("bgs\\" + filename, 'wb')
	webpage = urlopen(req).read()
	print("Downloading " + filename + "...")
	out_file.write(webpage)
	i = i + 1
print("DONE!")
