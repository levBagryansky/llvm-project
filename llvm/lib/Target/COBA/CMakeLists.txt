add_llvm_component_group(COBA)

add_llvm_target(COBACodeGen
        COBATargetMachine.cpp

        LINK_COMPONENTS
        CodeGen
        Core
        Support
        Target
        COBAInfo

        ADD_TO_COMPONENT
        COBA
        )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)

