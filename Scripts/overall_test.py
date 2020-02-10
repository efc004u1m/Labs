import os
import subprocess
import csv
from collections import defaultdict

report={}
ques_list = ["q3", "q4", "q5", "q6"]

for q in ques_list:
    os.chdir(q+"/runner/")
    for filename in os.listdir("exec/"):
        run_file = filename.split("_")
        run_file = run_file[0]
        f = open("reports/"+run_file+".txt", "w")
        try:
            subprocess.call(["exec/"+filename], stdout=f, timeout=2)
        except subprocess.TimeoutExpired:
            pass
        f.close()
        
        f2 = open("cases/"+run_file+".txt", "w")
        subprocess.run(["grep", "-c", "FAILED", "reports/"+run_file+".txt"], stdout=f2)
        f2.close()

        f2 = open("cases/"+run_file+".txt", "r")
        # print(f2.read().split("\n")[0])
        if (run_file in report):
            report[run_file][q] = f2.read().split("\n")[0]
        else:
            report[run_file] = {}
            report[run_file][q] = f2.read().split("\n")[0]

        f2.close()
        # break
    # break
    os.chdir("../../")
    
print(report)

with open('report.csv', 'w') as f:
    for entry in report.keys():
        res = [0, 0, 0, 0, 0]
        k = 0
        for q in ques_list:
            if (q in report[entry]):
                res[k] = int(report[entry][q])
            else:
                res[k] = -1
            k += 1
        for i in range(0, len(res)):
            res[i] = str(res[i])
        f.write("%s,%s,%s,%s,%s,%s\n"%(entry, res[0], res[1], res[2], res[3], res[4]))