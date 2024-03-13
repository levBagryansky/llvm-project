#ifndef LLVM_PROJECT_COBATARGETMACHINE_HPP
#define LLVM_PROJECT_COBATARGETMACHINE_HPP

#include "llvm/Target/TargetMachine.h"
#include <optional>

namespace llvm {
extern Target TheCOBATarget;

class COBATargetMachine : public LLVMTargetMachine {
private:
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
public:
  COBATargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                       StringRef FS, const TargetOptions &Options,
                       std::optional<Reloc::Model> RM,
                       std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                       bool JIT, bool isLittle);

  COBATargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                       StringRef Fs, const TargetOptions &Options,
                       std::optional<Reloc::Model> RM,
                       std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                       bool JIT);

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // end namespace llvm



#endif // LLVM_PROJECT_COBATARGETMACHINE_HPP
