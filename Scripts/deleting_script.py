import os
import subprocess
import csv
from collections import defaultdict

ques_list = ["q2", "q3", "q4", "q5", "q6"]

for entry in os.listdir("."):
    # change to the question runner directory
    try:
        os.chdir(entry)
        try:
            os.remove("test_reports/" + entry + ".txt")
        except FileNotFoundError:
            pass
        os.chdir("../")
    except NotADirectoryError:
        pass
