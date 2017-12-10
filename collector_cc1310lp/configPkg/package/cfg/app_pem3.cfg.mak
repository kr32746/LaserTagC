# invoke SourceDir generated makefile for app.pem3
app.pem3: .libraries,app.pem3
.libraries,app.pem3: package/cfg/app_pem3.xdl
	$(MAKE) -f C:\Users\Kevin\workspace_v7\collector_cc1310lp\Tools/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Kevin\workspace_v7\collector_cc1310lp\Tools/src/makefile.libs clean

