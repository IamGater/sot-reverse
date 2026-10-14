// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_SetNPCHandin_EllisSkull_C::OnBegin (40 bytes)
void BP_TheAshenDragon_SetNPCHandin_EllisSkull_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_SetNPCHandin_EllisSkull();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SetNPCHandin_EllisSkull_C::ExecuteUbergraph_BP_TheAshenDragon_SetNPCHandin_EllisSkull (263 bytes)
void BP_TheAshenDragon_SetNPCHandin_EllisSkull_C::ExecuteUbergraph_BP_TheAshenDragon_SetNPCHandin_EllisSkull()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = CallFunc_GetVariables_OutStruct->GetComponentInterfaceByClass(NPCCustomItemPurchaseInterface);
    TScriptInterface<UNPCCustomItemPurchaseInterface> idx_281873 = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281873);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_F4;
    bool idx_281869 = idx_281873->AddItemToPurchaseList(idx_281872);
L_F4:
    idx_281869 = false;
    return;
}
