import os
import subprocess
import csv
from collections import defaultdict

ques_list = ["q2", "q3", "q4", "q5", "q6"]

# move to the questions directory
os.chdir("../Lab 4 Grading/Questions")

for q in ques_list:
    # change to the question runner directory
    os.chdir(q+"/runner/")

    path = "../../../../Lab 4 Reports/"
    # change extension of log files to .txt
    for filename in os.listdir("logs/"):
        run_file = filename.split("_")
        run_file = run_file[0]
        os.rename("logs/" + filename, "logs/" + filename + ".txt")

    os.chdir("../../")
    