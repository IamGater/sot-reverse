// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator_C::ForIndex (40 bytes)
void BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator_C::ForIndex()
{
    ExecuteUbergraph_BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator();
    return;
}

// Recovered Kismet: BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator_C::ExecuteUbergraph_BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator (273 bytes)
void BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator_C::ExecuteUbergraph_BP_HeartOfFire_OutTrapDoorRefFromArrayGenerator()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_282106 = idx_282106;
    UTaleQuestParallelForeachStep::ToContext(idx_282106);
    return;
}
