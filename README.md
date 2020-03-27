# MRC Creator
Indoor cycling workout creator. It generates a .mrc and a .fit file from an specific text input file. 

## How to use it
- Execute MRC_creator.exe

- Select the folder with the .txt workouts.

- Insert your FTP (default: 200W)

- Insert the power offset that will be shown on your Garmin head unit (this is the limit between the power target. e.g. a 10W power offset will generate an interval with limits from X-10 to X10 Watts).

- Set Checkboxes for the outputs that you want. OBS: FIT for ANT+ FE-C is used if you want to use your garmin head unit to control an interactive trainer (this option will set the power offset to zero).

- Click Generate! PS: You just need to configure it once. Afterwards, everything is saved on your windows registry. 

- Use .mrc (it already come with laps between steps) and/or .erg files on GoldenCheetah, or another software that accepts it (e.g. TrainerRoad).

- Use .fit files on your Garmin device (if it accepts .fit file workouts). Just plug your device on computer and paste the .fit file on the Newfiles folder.

- Use .zwo files on Zwift. To do the workout, drag the .zwo file into the Zwift workouts directory (\Documents\Zwift\Workouts\)

## Input File Format
The input file have the same format as the one used in [TrainderDay](https://trainerday.com/) 

You can even copy/paste your workouts from TrainerDay to a .txt (it work backwards too).

The format is simple. It consists of two or three (optional) values per line.

The first value is the time of step in minutes.

The second value is the FTP Target (in % FTP).

The third value is optional and is used to create a Ramp from previous value to this one.

Example:
```
5	40

5	40	70

5	70

20	90

5	40
```

Note that the second line creates a ramp from 40% ftp to 70% ftp during the 5 min step time.

The other steps have just one FTP Target.

## Output Files Description and Documentation

[MRC and ERG File description](https://support.trainerroad.com/hc/en-us/articles/201944204-Creating-a-Workout-from-an-ERG-or-MRC-File)

[FIT File description and SDK](https://www.thisisant.com/resources/fit-sdk-beta/)

[ZWO File description](https://github.com/h4l/zwift-workout-file-reference/blob/master/zwift_workout_file_tag_reference.md)
