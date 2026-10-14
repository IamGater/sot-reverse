// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SetNPCHandInRequirements_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SetNPCHandInRequirements_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SetNPCHandInRequirements();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SetNPCHandInRequirements_C::ExecuteUbergraph_BP_Shroudbreaker_SetNPCHandInRequirements (634 bytes)
void BP_Shroudbreaker_SetNPCHandInRequirements_C::ExecuteUbergraph_BP_Shroudbreaker_SetNPCHandInRequirements()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentInterfacesByClass_OutInterfaces);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_1E6;
    TScriptInterface<UNPCCustomItemPurchaseInterface> UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_267;
    bool CallFunc_AddItemToPurchaseList_ReturnValue = UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface->AddItemToPurchaseList(Item);
L_1E6:
L_267:
    CallFunc_AddItemToPurchaseList_ReturnValue = false;
    return;
}
