#I/bin/bash

verilator --trace --binary -j 0 bug_tb.sv

echo " --- RUNNING ---"
./obj_dir/Vbug_tb
