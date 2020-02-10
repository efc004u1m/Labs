import os
import subprocess
import csv
from collections import defaultdict

report={}
ques_list = ["q3", "q4", "q5", "q6"]

for q in ques_list:
    os.chdir(q+"/runner/")
    for filename in os.listdir("../"):
        if (filename.endswith(".cpp")):
            run_file = filename.split(".")
            run_file = run_file[0]
            # print(run_file)
            res = subprocess.call(["./run.sh", run_file])
    # break
    os.chdir("../../")