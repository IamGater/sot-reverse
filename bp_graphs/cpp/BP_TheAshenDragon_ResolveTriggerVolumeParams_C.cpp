// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_ResolveTriggerVolumeParams_C::OnBegin (40 bytes)
void BP_TheAshenDragon_ResolveTriggerVolumeParams_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_ResolveTriggerVolumeParams();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_ResolveTriggerVolumeParams_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveTriggerVolumeParams (815 bytes)
void BP_TheAshenDragon_ResolveTriggerVolumeParams_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveTriggerVolumeParams()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(idx_281863);
    if (!idx_281863) goto L_1EB;
    if (!idx_281863) goto L_289;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_281866 = UniqueObjectNameForCooking_AsActor;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(idx_281862);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* idx_281811 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281811);
    auto idx_281862 = idx_281862;
    idx_281862 = idx_281862;
    UBlueprintStepBase::SetVariables(idx_281862);
    this->SignalComplete();
L_1EB:
    UObject* idx_281823 = UKismetSystemLibrary::Conv_AssetToObject(idx_281863);
    AActor* idx_281831 = Cast<AActor*>(idx_281823);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(idx_281831);
    idx_281866 = idx_281831;
L_289:
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(idx_281863);
    AActor* idx_281830 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_281830);
    idx_281866 = idx_281830;
    return;
}
