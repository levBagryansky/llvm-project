#include "TargetInfo/COBATargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheCOBATarget() {
  static Target TheCOBATarget;
  return TheCOBATarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeCOBATargetInfo() {
  RegisterTarget<Triple::COBA> X(getTheCOBATarget(), "COBA", "COBA 64",
                                    "COBA");
}
