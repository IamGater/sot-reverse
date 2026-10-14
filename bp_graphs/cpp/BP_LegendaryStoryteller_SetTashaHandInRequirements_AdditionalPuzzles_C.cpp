// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles_C::OnBegin (40 bytes)
void BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles_C::OnBegin()
{
    ExecuteUbergraph_BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles();
    return;
}

// Recovered Kismet: BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles_C::ExecuteUbergraph_BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles (328 bytes)
void BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles_C::ExecuteUbergraph_BP_LegendaryStoryteller_SetTashaHandInRequirements_AdditionalPuzzles()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    TScriptInterface<UNPCCustomItemPurchaseInterface> idx_227755 = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_227755);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_135;
    bool idx_227751 = idx_227755->AddItemToPurchaseList(idx_230538);
L_135:
    idx_227751 = false;
    return;
}
