// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_shrine_fod_wsp_resource_island_02_d_dressing_C::UserConstructionScript (3 bytes)
void BP_shrine_fod_wsp_resource_island_02_d_dressing_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_shrine_fod_wsp_resource_island_02_d_dressing_C::OnFortEventBeginClientCallback (22 bytes)
void BP_shrine_fod_wsp_resource_island_02_d_dressing_C::OnFortEventBeginClientCallback()
{
    ExecuteUbergraph_BP_shrine_fod_wsp_resource_island_02_d_dressing();
    return;
}

// Recovered Kismet: BP_shrine_fod_wsp_resource_island_02_d_dressing_C::ExecuteUbergraph_BP_shrine_fod_wsp_resource_island_02_d_dressing (342 bytes)
void BP_shrine_fod_wsp_resource_island_02_d_dressing_C::ExecuteUbergraph_BP_shrine_fod_wsp_resource_island_02_d_dressing()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(PlaceableReaction);
    PlaceableReaction* idx_227577 = Cast<PlaceableReaction*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_227577);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_227577);
    if (!CallFunc_IsValid_ReturnValue) goto L_153;
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(PlaceableReaction);
    idx_227577 = Cast<PlaceableReaction*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_227577);
L_153:
    return;
}
