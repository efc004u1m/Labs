import os
import subprocess
import csv

# report={}
for filename in os.listdir("exec/"):
    run_file = filename.split("_")
    run_file = run_file[0]
    # print(run_file)
    f = open("reports/"+run_file, "w")
    subprocess.call(["exec/"+filename], stdout=f)
    f.close()
    
    f2 = open("cases/"+run_file, "w")
    subprocess.run(["grep", "-c", "failed", "reports/"+run_file], stdout=f2)
    f2.close()

# print(report)

# with open('report_q2.csv', 'w') as f:
#     for key in report.keys():
#         f.write("%s,%s\n"%(key, report[key]))