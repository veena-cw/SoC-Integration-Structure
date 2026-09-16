set_param project.enableReportConfiguration 0
load_feature core
current_fileset
xsim {test_top_sim} -testplusarg UVM_TESTNAME=apb_i2c_ral_test -autoloadwcfg
