// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WildRose_SetOliveHandInRequirements_1_C::OnBegin (40 bytes)
void BP_WildRose_SetOliveHandInRequirements_1_C::OnBegin()
{
    ExecuteUbergraph_BP_WildRose_SetOliveHandInRequirements_1();
    return;
}

// Recovered Kismet: BP_WildRose_SetOliveHandInRequirements_1_C::ExecuteUbergraph_BP_WildRose_SetOliveHandInRequirements_1 (599 bytes)
void BP_WildRose_SetOliveHandInRequirements_1_C::ExecuteUbergraph_BP_WildRose_SetOliveHandInRequirements_1()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    TScriptInterface<UNPCCustomItemPurchaseInterface> idx_284324 = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_284324);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_234;
    bool idx_284320 = idx_284324->AddItemToPurchaseList(idx_284323);
    TScriptInterface<UNPCCustomItemPurchaseInterface> UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_244;
    bool CallFunc_AddItemToPurchaseList_ReturnValue = UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface->AddItemToPurchaseList(MusicBox);
    this->SignalComplete();
L_234:
    idx_284320 = false;
L_244:
    CallFunc_AddItemToPurchaseList_ReturnValue = false;
    return;
}
