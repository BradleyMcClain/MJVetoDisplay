Use the commands "make clean" then "make create" to compile and create an executable, named "VetoDisplay". Use "make lander" for making a "landscape" executable, or "make all" for both. Must first have Root and MGDO installed. When run from the command line, VetoDisplay generates pdf files to the "assembly_output" folder. The folders coorespond to number of panels hit, with 9+ panels hit going into the 'other' folder, as well as a final heatmap.

If there is a certain run you'd like to see a rotatable 3-D model of, simply run ./VetoDisplay runNumber eventCount

To clear output all output subdirectories:
cd to the main output directory "assembly_output" and use the command:

find . ! -type d -exec rm '{}' \;

careful, dangourous command if used from any other directory!
