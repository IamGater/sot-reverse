// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_OneShotDamageVolume_Capsule_C::UserConstructionScript (3 bytes)
void BP_OneShotDamageVolume_Capsule_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_OneShotDamageVolume_Capsule_C::ReceiveActorBeginOverlap (40 bytes)
void BP_OneShotDamageVolume_Capsule_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_OneShotDamageVolume_Capsule();
    return;
}

// Recovered Kismet: BP_OneShotDamageVolume_Capsule_C::ExecuteUbergraph_BP_OneShotDamageVolume_Capsule (601 bytes)
void BP_OneShotDamageVolume_Capsule_C::ExecuteUbergraph_BP_OneShotDamageVolume_Capsule()
{
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_OtherActor->GetComponentsByClass(HealthComponent);
    auto CallFunc_Multiply_FloatFloat_ReturnValue = Damage;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_OtherActor->GetComponentsByClass(HealthComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    return;
}
