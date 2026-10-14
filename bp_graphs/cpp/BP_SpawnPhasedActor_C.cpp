// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnPhasedActor_C::GetClassName (191 bytes)
void BP_SpawnPhasedActor_C::GetClassName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    return;
}

// Recovered Kismet: BP_SpawnPhasedActor_C::OnBeginCustom (535 bytes)
void BP_SpawnPhasedActor_C::OnBeginCustom()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_282646);
    if (!CallFunc_IsValid_ReturnValue) goto L_BF;
    auto CallFunc_GetTransform_ReturnValue = idx_282646->this->GetTransform();
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(ActorClass, CallFunc_GetTransform_ReturnValue);
L_BF:
    GetClassName(idx_282644);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}
