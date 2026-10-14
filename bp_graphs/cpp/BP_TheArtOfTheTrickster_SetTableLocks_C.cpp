// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_SetTableLocks_C::OnBegin (40 bytes)
void BP_TheArtOfTheTrickster_SetTableLocks_C::OnBegin()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_SetTableLocks();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_SetTableLocks_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_SetTableLocks (960 bytes)
void BP_TheArtOfTheTrickster_SetTableLocks_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_SetTableLocks()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = CallFunc_GetVariables_OutStruct2->GetComponentInterfaceByClass(LockableInterface);
    TScriptInterface<ULockableInterface> UniqueObjectNameForCooking_AsLockable_Interface = TScriptInterface<ULockableInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsLockable_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_117;
L_117:
    BP_TheArtOfTheTrickster_VaultTable_C* idx_284499 = Cast<BP_TheArtOfTheTrickster_VaultTable_C*>(CallFunc_GetVariables_OutStruct2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_284499);
    if (!K2Node_DynamicCast_bSuccess) goto L_1A2;
    this->SignalComplete();
L_1A2:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetClassDisplayName_ReturnValue);
    UClass* CallFunc_GetObjectClass_ReturnValue2 = UGameplayStatics::GetObjectClass(idx_284499);
    FString CallFunc_GetClassDisplayName_ReturnValue2 = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue2);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetClassDisplayName_ReturnValue2, CallFunc_Concat_StrStr_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue3 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue2);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}
