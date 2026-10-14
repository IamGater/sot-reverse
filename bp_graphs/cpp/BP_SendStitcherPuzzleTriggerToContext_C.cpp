// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SendStitcherPuzzleTriggerToContext_C::ForIndex (40 bytes)
void BP_SendStitcherPuzzleTriggerToContext_C::ForIndex()
{
    ExecuteUbergraph_BP_SendStitcherPuzzleTriggerToContext();
    return;
}

// Recovered Kismet: BP_SendStitcherPuzzleTriggerToContext_C::ExecuteUbergraph_BP_SendStitcherPuzzleTriggerToContext (273 bytes)
void BP_SendStitcherPuzzleTriggerToContext_C::ExecuteUbergraph_BP_SendStitcherPuzzleTriggerToContext()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_282254 = idx_282254;
    UTaleQuestParallelForeachStep::ToContext(idx_282254);
    return;
}
