CLONE THE REPO (with all submodules)  
------------------------------------
git clone --recurse-submodules git@github.com:veena-cw/SoC-Integration-Structure.git

or
---
git clone https://github.com/veena-cw/SoC-Integration-Structure.git


BEFORE MAKING CHANGES (Check the branch details)
--------------------------------------------------
git status
git branch  //[ you should see *main]

Pull the latest changes before pushing to the repo
-----------------------------------------------------
git pull --rebase origin main


To check the changes made 
-------------------------
git status
git diff

To add your changes
-------------------
git add
git status

To add only a particular file
----------------------------
git add path/to/file

Commit your changes
-------------------
git commit -m "Update I2C integration"

Push your changes 
------------------
git push origin main




STEPS FOR EXECUTION
--------------------
1. After Cloning go to Soc-Integration-Structure and source the source_file.sh
cd SoC-Integration-Structure
source source_file.sh

2. echo $REPO_ROOT
// it should show .../SoC-Integration-Structure

3. Verification [ GO TO THE SIM DIR] : 
cd VERIF/i2c_verif/i2c_tb/sim/

4.Run the Make file using the following command : 
make verilator  TESTNAME=apb_i2c_reg_write_test

5. To get the waveform : 
  make waveform
