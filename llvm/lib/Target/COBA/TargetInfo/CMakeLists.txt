add_llvm_component_library(LLVMCOBAInfo
        COBATargetInfo.cpp

        LINK_COMPONENTS
        MC
        Support

        ADD_TO_COMPONENT
        COBA
        )

