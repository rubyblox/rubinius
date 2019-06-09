#include "instructions/r_load_true.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t r_load_true(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      instructions::r_load_true(call_frame, argument(0));

      call_frame->next_ip(instructions::data_r_load_true.width);

      return ((instructions::Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
