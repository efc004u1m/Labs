import os
import subprocess
import csv
from collections import defaultdict

# try:
#     os.mkdir("2016UCS0008")
# except FileExistsError:
#     pass

ques_list = ["q2", "q3", "q4", "q5", "q6"]

# move to the questions directory
os.chdir("../Lab 4 Grading/Questions")

for q in ques_list:
    # change to the question runner directory
    os.chdir(q+"/runner/")

    path = "../../../../Lab 4 Reports/"
    # move the logs to the appropriate directory of the student
    for filename in os.listdir("logs/"):
        # split log by question "_"
        run_file = filename.split("_")
        run_file = run_file[0]
        
        # make directory if not already there
        try:
            os.mkdir(path + run_file)
            os.mkdir(path + run_file + "/logs")
            os.mkdir(path + run_file + "/test_reports")
        except FileExistsError:
            pass
        os.rename("logs/" + filename, path + run_file + "/logs/" + filename)

    # move the reports to the appropriate directory of the student
    for filename in os.listdir("reports/"):
        # split report by extension '.'
        run_file = filename.split(".")
        run_file = run_file[0]
        # make directory if not already there
        try:
            os.mkdir(path + run_file)
            os.mkdir(path + run_file + "/logs")
            os.mkdir(path + run_file + "/test_reports")
        except FileExistsError:
            pass
        # also append the question name at the end
        os.rename("reports/" + filename, path + run_file + "/test_reports/" + run_file + "_" + q + ".txt")

    os.chdir("../../")
    