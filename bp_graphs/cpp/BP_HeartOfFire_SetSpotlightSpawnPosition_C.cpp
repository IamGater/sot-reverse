// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_SetSpotlightSpawnPosition_C::GetActorTransformFromID (196 bytes)
void BP_HeartOfFire_SetSpotlightSpawnPosition_C::GetActorTransformFromID()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(Asset);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetTransform_ReturnValue = UniqueObjectNameForCooking_AsActor->this->GetTransform();
    return;
}

// Recovered Kismet: BP_HeartOfFire_SetSpotlightSpawnPosition_C::OnBeginCustom (921 bytes)
void BP_HeartOfFire_SetSpotlightSpawnPosition_C::OnBeginCustom()
{
    BP_HeartOfFire_SpotlightTrigger_C* idx_282242 = Cast<BP_HeartOfFire_SpotlightTrigger_C*>(idx_282244);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282242);
    if (!K2Node_DynamicCast_bSuccess) goto L_D9;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282242->this->FlushNetDormancy();
    GetActorTransformFromID(idx_282243, idx_282239);
    idx_282242 = idx_282242;
    this->SignalComplete();
L_D9:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_282244);
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue2 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}
