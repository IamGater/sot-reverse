// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_WaitForCollectorChestUnlock_C::OnBegin (40 bytes)
void BP_CursedRogue_WaitForCollectorChestUnlock_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock();
    return;
}

// Recovered Kismet: BP_CursedRogue_WaitForCollectorChestUnlock_C::On Chest Unlocked (22 bytes)
void BP_CursedRogue_WaitForCollectorChestUnlock_C::On Chest Unlocked()
{
    ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock();
    return;
}

// Recovered Kismet: BP_CursedRogue_WaitForCollectorChestUnlock_C::ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock (1018 bytes)
void BP_CursedRogue_WaitForCollectorChestUnlock_C::ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    CollectorsChestItemInfo* idx_283775 = Cast<CollectorsChestItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283775);
    if (!K2Node_DynamicCast_bSuccess) goto L_335;
    auto CallFunc_GetItem_ReturnValue = idx_283775->this->GetItem();
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetItem_ReturnValue->GetComponentsByClass(LockComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_A;
    CallFunc_GetItem_ReturnValue = idx_283775->this->GetItem();
    CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetItem_ReturnValue->GetComponentsByClass(LockComponent);
L_335:
    this->SignalComplete();
    return;
}
