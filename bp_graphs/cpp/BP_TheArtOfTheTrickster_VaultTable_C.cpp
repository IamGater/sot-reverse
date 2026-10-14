// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::Initialise (14 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::Initialise()
{
    bool idx_275303 = true;
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::GetObjectDisplayName (92 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::GetClosestInteractionPoint (111 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::GetClosestInteractionPoint()
{
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::UserConstructionScript (3 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::ReceiveBeginPlay (22 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_96_OnIndividualLockOpenedDelegate__DelegateSignature (22 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_96_OnIndividualLockOpenedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_109_OnLockOpenedDelegate__DelegateSignature (22 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_109_OnLockOpenedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::Multicast Play Sequential VFX (22 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::Multicast Play Sequential VFX()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::Multicast Play All VFX (22 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::Multicast Play All VFX()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultTable_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable (754 bytes)
void BP_TheArtOfTheTrickster_VaultTable_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable()
{
    Multicast Play All VFX();
    Multicast Play Sequential VFX();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ParticleSystems);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TScriptInterface<UInteractableInterface> CallFunc_Initialise_InInteractableInterface_CastInput = TScriptInterface<UInteractableInterface>(nullptr);
    auto ParticleSystems = K2Node_MakeArray_Array;
    auto CallFunc_Add_IntInt_ReturnValue2 = VFXIndex;
    auto VFXIndex = CallFunc_Add_IntInt_ReturnValue2;
    return;
}
