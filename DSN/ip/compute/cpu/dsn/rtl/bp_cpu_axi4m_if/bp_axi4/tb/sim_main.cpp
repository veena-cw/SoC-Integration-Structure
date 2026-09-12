#include "Vbp_bedrock_axi4_adapter_tb.h"
#include "verilated.h"

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vbp_bedrock_axi4_adapter_tb* top =
        new Vbp_bedrock_axi4_adapter_tb;

    while (!Verilated::gotFinish()) {

        top->eval();

        if (top->eventsPending()) {
            vluint64_t next_time = top->nextTimeSlot();
            vluint64_t current_time = Verilated::time();

            if (next_time > current_time) {
                Verilated::timeInc(next_time - current_time);
            }
        }
        else {
            break;
        }
    }

    top->final();

    delete top;

    return 0;
}
