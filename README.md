# MRC Creator
indoor cycling workout creator. It generates a .mrc and a .fit file from an specific text input file. 

# How to use it
- Open WriteFIT.h and change your FTP value (it's hardcoded yet). 
- Compile it with Visual Studio (some few windows libraries were used to list current directory files).
- Put all your .txt workout files in the same folder as the .exe generated
- Run .exe to generate the outputs (.mrc and .fit files)
- Use your .mrc files on GoldenCheetah (it already come with laps inserted) or another software that accepts it (like TrainerRoad).
- Use your .fit files on your Garmin device (if it accepts .fit file workouts). Just plug your device on computer and paste the file on the Workotus folder.

# Input File Format
The input file have the same format as the one used in https://ergdb.org/ 
You can even copy/paste your workouts from ergdb to a .txt (it work backwards too)
The format is simple. It consists of two or three (optional) values per line
The first value is the time of step in minutes.
The second value is the FTP Target (in % FTP)
The third value is optional and is used to create a Ramp from previous value to this one.

Example:
5	40
5	40	70
5	70
20	90
5	40

Note that the second line creates a ramp from 40% ftp to 70% ftp during the 5 min time.
The rest of the steps have just one FTP Target.

# Output Files

MRC File description: https://support.trainerroad.com/hc/en-us/articles/201944204-Creating-a-Workout-from-an-ERG-or-MRC-File

FIT File description and SDK: https://www.thisisant.com/resources/fit
