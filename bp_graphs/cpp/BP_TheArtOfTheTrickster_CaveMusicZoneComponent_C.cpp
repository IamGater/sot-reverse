// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_CaveMusicZoneComponent_C::CanPlayForPlayer (368 bytes)
void BP_TheArtOfTheTrickster_CaveMusicZoneComponent_C::CanPlayForPlayer()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = Player->GetComponentsByClass(CharacterAudioComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_15A;
    CallFunc_GetComponentsByClass_ReturnValue = Player->GetComponentsByClass(CharacterAudioComponent);
    bool idx_279213 = CallFunc_Array_Get_Item->GetIsPlayerInCave();
L_15A:
    return;
}
