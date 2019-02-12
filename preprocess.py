import cv2
import numpy as np
import sys

path = sys.argv[1]
img = cv2.imread(path,0)
if img.shape != [28,28]:
    img2 = cv2.resize(img,(28,28))
    img = img2.reshape(28,28,-1);
else:
    img = img.reshape(28,28,-1);
#revert the image,and normalize it to 0-1 range
img = 1.0 - img/255.0

file = open("data.txt", 'w')

for i in range(0, 28):
    for j in range(0, 28):
        file.write(str(img[i][j][0]) + "\n")