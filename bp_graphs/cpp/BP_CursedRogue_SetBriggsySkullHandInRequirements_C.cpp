// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_SetBriggsySkullHandInRequirements_C::OnBegin (40 bytes)
void BP_CursedRogue_SetBriggsySkullHandInRequirements_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_SetBriggsySkullHandInRequirements();
    return;
}

// Recovered Kismet: BP_CursedRogue_SetBriggsySkullHandInRequirements_C::ExecuteUbergraph_BP_CursedRogue_SetBriggsySkullHandInRequirements (500 bytes)
void BP_CursedRogue_SetBriggsySkullHandInRequirements_C::ExecuteUbergraph_BP_CursedRogue_SetBriggsySkullHandInRequirements()
{
    this->GetVariables(idx_227630);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_230495);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_1F1;
    TScriptInterface<UNPCCustomItemPurchaseInterface> idx_227755 = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_227755);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_1E1;
    bool idx_227751 = idx_227755->AddItemToPurchaseList(ItemDesc);
    this->SignalComplete();
L_1E1:
    idx_227751 = false;
L_1F1:
    return;
}
