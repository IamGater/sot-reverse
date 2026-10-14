// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_SetNPCHandInRequirements_C::OnBegin (40 bytes)
void BP_TheArtOfTheTrickster_SetNPCHandInRequirements_C::OnBegin()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_SetNPCHandInRequirements();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_SetNPCHandInRequirements_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_SetNPCHandInRequirements (263 bytes)
void BP_TheArtOfTheTrickster_SetNPCHandInRequirements_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_SetNPCHandInRequirements()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = CallFunc_GetVariables_OutStruct->GetComponentInterfaceByClass(NPCCustomItemPurchaseInterface);
    TScriptInterface<UNPCCustomItemPurchaseInterface> UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_F4;
    bool CallFunc_AddItemToPurchaseList_ReturnValue = UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface->AddItemToPurchaseList(Item);
L_F4:
    CallFunc_AddItemToPurchaseList_ReturnValue = false;
    return;
}
