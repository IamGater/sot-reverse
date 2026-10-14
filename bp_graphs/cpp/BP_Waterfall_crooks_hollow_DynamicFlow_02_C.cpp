// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Waterfall_crooks_hollow_DynamicFlow_02_C::Initialize Materials (512 bytes)
void BP_Waterfall_crooks_hollow_DynamicFlow_02_C::Initialize Materials()
{
    int CallFunc_GetNumMaterials_ReturnValue = DynamicFlow->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = DynamicFlow->GetMaterial(Temp_int_Variable);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    auto CallFunc_GetTexture_ReturnValue = DynamicFlow->this->GetTexture();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Waterfall_crooks_hollow_DynamicFlow_02_C::UserConstructionScript (3 bytes)
void BP_Waterfall_crooks_hollow_DynamicFlow_02_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Waterfall_crooks_hollow_DynamicFlow_02_C::ReceiveBeginPlay (22 bytes)
void BP_Waterfall_crooks_hollow_DynamicFlow_02_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Waterfall_crooks_hollow_DynamicFlow_02();
    return;
}

// Recovered Kismet: BP_Waterfall_crooks_hollow_DynamicFlow_02_C::ExecuteUbergraph_BP_Waterfall_crooks_hollow_DynamicFlow_02 (37 bytes)
void BP_Waterfall_crooks_hollow_DynamicFlow_02_C::ExecuteUbergraph_BP_Waterfall_crooks_hollow_DynamicFlow_02()
{
    Initialize Materials();
    return;
}
