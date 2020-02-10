import os, zipfile

for item in os.listdir("."):
    if (item.endswith(".zip")):
        file_name = os.path.abspath(item)
        zip_ref = zipfile.ZipFile(file_name)
        zip_ref.extractall(".")
        zip_ref.close()
        os.remove(file_name)
