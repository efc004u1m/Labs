import os
import subprocess
import csv

# report={}
for filename in os.listdir("../"):
    if (filename.endswith(".cpp")):
        run_file = filename.split(".")
        run_file = run_file[0]
        # print(run_file)
        res = subprocess.call(["./run.sh", run_file])
        # report[run_file[:-3]]=res

# print(report)

# with open('report_q2.csv', 'w') as f:
#     for key in report.keys():
#         f.write("%s,%s\n"%(key, report[key]))