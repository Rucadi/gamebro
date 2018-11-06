#pragma once

#include "cpu.hpp"
#include "display_data.hpp"
#include "memory.hpp"

namespace gbc
{
  class Machine
  {
  public:
    Machine();
    // common operations
    void incr_cycles(int count) { cpu.incr_cycles(count); }

    CPU    cpu;
    Memory memory;
    DisplayData ddCharacter;
    DisplayData ddBackground1;
    DisplayData ddBackground2;
  };

  inline Machine::Machine()
    : memory(*this),
      ddCharacter  {Memory::Display_Chr},
      ddBackground1{Memory::Display_BG1},
      ddBackground2{Memory::Display_BG2}
  {

  }
}
