import os, zipfile
import shutil

"""
RENAME 1
for filename in os.listdir("."):
    if (filename.endswith(".zip")):
        newname = filename[:-4]
        shutil.move(filename, newname+"/"+filename)
"""

for filename in os.listdir("."):
    if (os.path.isdir(filename)):
        newname = filename.split(" ")
        newname = newname[0]
        shutil.move(filename, newname)

"""
UNZIP
for filename in os.listdir("."):
    if (os.path.isdir(filename)):
        os.chdir(filename)
        for zip_file in os.listdir("."):
            if (zip_file.endswith(".zip")):
                # get the file name
                file_name = os.path.abspath(zip_file)
                # get the zip reference
                zip_ref = zipfile.ZipFile(file_name)
                zip_ref.extractall(".")
                # delete the zip file
                os.remove(file_name)
                zip_ref.close()
        os.chdir("..")
"""