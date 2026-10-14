// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_SetNPCHandin_FlameSkull_C::OnBegin (40 bytes)
void BP_TheAshenDragon_SetNPCHandin_FlameSkull_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_SetNPCHandin_FlameSkull();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SetNPCHandin_FlameSkull_C::ExecuteUbergraph_BP_TheAshenDragon_SetNPCHandin_FlameSkull (263 bytes)
void BP_TheAshenDragon_SetNPCHandin_FlameSkull_C::ExecuteUbergraph_BP_TheAshenDragon_SetNPCHandin_FlameSkull()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = idx_227630->GetComponentInterfaceByClass(NPCCustomItemPurchaseInterface);
    TScriptInterface<UNPCCustomItemPurchaseInterface> idx_227755 = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_227755);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_F4;
    bool idx_227751 = idx_227755->AddItemToPurchaseList(idx_227754);
L_F4:
    idx_227751 = false;
    return;
}
