// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LegendaryStoryteller_SetTashaHandInRequirements_C::OnBegin (40 bytes)
void BP_LegendaryStoryteller_SetTashaHandInRequirements_C::OnBegin()
{
    ExecuteUbergraph_BP_LegendaryStoryteller_SetTashaHandInRequirements();
    return;
}

// Recovered Kismet: BP_LegendaryStoryteller_SetTashaHandInRequirements_C::ExecuteUbergraph_BP_LegendaryStoryteller_SetTashaHandInRequirements (328 bytes)
void BP_LegendaryStoryteller_SetTashaHandInRequirements_C::ExecuteUbergraph_BP_LegendaryStoryteller_SetTashaHandInRequirements()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    TScriptInterface<UNPCCustomItemPurchaseInterface> UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_135;
    bool CallFunc_AddItemToPurchaseList_ReturnValue = UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface->AddItemToPurchaseList(idx_283885);
L_135:
    CallFunc_AddItemToPurchaseList_ReturnValue = false;
    return;
}
