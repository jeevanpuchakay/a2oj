import json
import csv

if __name__ == "__main__":
    json_file_path = "input.json"
    fp = open(json_file_path, "r")
    json_value = fp.read()
    raw_data = json.loads(json_value)
    fp.close()
    header=raw_data[0].keys()
    with open("output.csv","w") as output:
        writer= csv.DictWriter(output,fieldnames= header)
        writer.writeheader()
        for eachRow in raw_data:
            writer.writerow(eachRow)