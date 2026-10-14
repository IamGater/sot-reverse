// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_large_mast_fore_C::UserConstructionScript (13 bytes)
void BP_large_mast_fore_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_large_mast_fore_C::OnMastDescLoaded (40 bytes)
void BP_large_mast_fore_C::OnMastDescLoaded()
{
    ExecuteUbergraph_BP_large_mast_fore();
    return;
}

// Recovered Kismet: BP_large_mast_fore_C::ExecuteUbergraph_BP_large_mast_fore (320 bytes)
void BP_large_mast_fore_C::ExecuteUbergraph_BP_large_mast_fore()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    bool CallFunc_SetStaticMesh_ReturnValue = shp_flag_pennant_01_a->SetStaticMesh(K2Node_Event_MastDesc);
    this->OnMastDescLoaded(K2Node_Event_MastDesc);
    return;
}
