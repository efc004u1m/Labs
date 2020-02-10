import os, zipfile
import re

pattern = re.compile("2019[uU][cCmMeE][sShHtTeE][0-9]{4}/q[1-6].cpp")
entryPattern = re.compile("2019[uU][cCmMeE][sShHtTeE][0-9]{4}")

invalidEntries = []
for item in os.listdir("."):
    if (item.endswith(".zip")):
        # get the file name
        file_name = os.path.abspath(item)
        # get the zip reference
        zip_ref = zipfile.ZipFile(file_name)
        # get the list of files in the zip file
        file_list = zip_ref.namelist()
        # for a file in it, split the name with '/'

        invalid = False
        for elem in file_list:
            res = elem.split('/') # 2016UCS0008/q1.cpp
            # if(pattern.match(elem) == None):
                # print(elem)
                # invalid = True
            # print(elem)
            if (entryPattern.match(res[0]) == None):
                invalid = True

        if (invalid):
            invalidEntries.append(item)
        else:
            # extract valid entry
            zip_ref.extractall(".")
            # delete the zip file
            os.remove(file_name)
        zip_ref.close()

for file_name in invalidEntries:
    print(file_name)

# move invalid entries to a new folder
# mv *.zip ../Invalid