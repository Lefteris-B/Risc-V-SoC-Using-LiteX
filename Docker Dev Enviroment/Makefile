TOOL=quartus201

URL=https://download.altera.com/akdlm/software/acdsinst/20.1std/711/ib_tar/Quartus-lite-20.1.0.711-linux.tar
INSTALLER=Quartus-lite-20.1.0.711-linux.tar

ECLIPSE_URL=https://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/mars/2/eclipse-cpp-mars-2-linux-gtk-x86_64.tar.gz
ECLIPSE=eclipse-cpp-mars-2-linux-gtk-x86_64.tar.gz


FILES=$(INSTALLER) $(ECLIPSE) Dockerfile

all: container-image-built

${INSTALLER}:
	curl -O $(URL)

${ECLIPSE}:
	curl -LO "$(ECLIPSE_URL)"

container-image-built: $(FILES)
	@docker build -t fpga:$(TOOL) --build-arg "TOOL=$(TOOL)" . 
	touch $@

.PHONY: clean
clean:
	-docker rmi fpga:$(TOOL) >&/dev/null || true
	-docker rmi $$(docker images --filter "label=com.egbatzo.dipae/litex.temp=1" -q)
	-docker rmi $$(docker images --filter "com.egbatzo.dipae/litex.tool=$(TOOL)" -q)
	-rm -f container-image-built