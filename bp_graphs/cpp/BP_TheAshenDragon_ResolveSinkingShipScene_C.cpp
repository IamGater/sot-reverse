// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_ResolveSinkingShipScene_C::OnBegin (40 bytes)
void BP_TheAshenDragon_ResolveSinkingShipScene_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_ResolveSinkingShipScene();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_ResolveSinkingShipScene_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveSinkingShipScene (1386 bytes)
void BP_TheAshenDragon_ResolveSinkingShipScene_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveSinkingShipScene()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* idx_281811 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281811);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* idx_281823 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* idx_281830 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_281830);
    AActor* idx_281831 = Cast<AActor*>(idx_281823);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(idx_281831);
    UObject* idx_281824 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* idx_281825 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* idx_281832 = Cast<AActor*>(idx_281824);
    bool UniqueObjectNameForCooking_bSuccess5 = static_cast<bool>(idx_281832);
    AActor* idx_281833 = Cast<AActor*>(idx_281825);
    bool UniqueObjectNameForCooking_bSuccess6 = static_cast<bool>(idx_281833);
    UObject* idx_281826 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* idx_281827 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* idx_281834 = Cast<AActor*>(idx_281826);
    bool idx_281836 = static_cast<bool>(idx_281834);
    AActor* idx_281835 = Cast<AActor*>(idx_281827);
    bool idx_281837 = static_cast<bool>(idx_281835);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    return;
}
