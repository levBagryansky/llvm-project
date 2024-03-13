add_llvm_component_library(LLVMCOBADesc
COBAMCTargetDesc.cpp

LINK_COMPONENTS
MC
Support
COBAInfo

ADD_TO_COMPONENT
COBA
)

