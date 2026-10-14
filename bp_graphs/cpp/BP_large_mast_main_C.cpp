// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_large_mast_main_C::UserConstructionScript (109 bytes)
void BP_large_mast_main_C::UserConstructionScript()
{
    auto MastPhysicsComponents = MastPhysicsComponents;
    MastPhysicsComponents = MastPhysicsComponents;
    MastPhysicsComponents = MastPhysicsComponents;
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_large_mast_main_C::OnMastDescLoaded (40 bytes)
void BP_large_mast_main_C::OnMastDescLoaded()
{
    ExecuteUbergraph_BP_large_mast_main();
    return;
}

// Recovered Kismet: BP_large_mast_main_C::ExecuteUbergraph_BP_large_mast_main (752 bytes)
void BP_large_mast_main_C::ExecuteUbergraph_BP_large_mast_main()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    auto CallFunc_IsValid_ReturnValue4 = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    bool CallFunc_SetStaticMesh_ReturnValue2 = shp_flag_jolly_roger_01_a->SetStaticMesh(K2Node_Event_MastDesc);
    this->OnMastDescLoaded(K2Node_Event_MastDesc);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    bool CallFunc_SetStaticMesh_ReturnValue3 = CrowsNest->SetStaticMesh(K2Node_Event_MastDesc);
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    bool CallFunc_SetStaticMesh_ReturnValue = shp_flag_pennant_alliance_01_a->SetStaticMesh(K2Node_Event_MastDesc);
    return;
}
