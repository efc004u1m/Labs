import os
import subprocess
import csv
from collections import defaultdict
import shutil

'''
RENAME THE FILE ITSELF
for entry in os.listdir("."):
    # print(entry)
    if (os.path.isdir(entry)):
        os.chdir(entry)
        for filename in os.listdir("."):
            new_name = entry + "_" + filename
            shutil.move(filename, new_name)
        os.chdir("..")
'''

# MOVE TO THE APPROPRIATE DIRECTORY
for entry in os.listdir("."):
    if (os.path.isdir(entry)):
        os.chdir(entry)
        for filename in os.listdir("."):
            qname = filename.split("_")[1].split(".")[0]
            # print(qname)
            shutil.move(filename, "../" + qname + "/" + filename)
        os.chdir("..")