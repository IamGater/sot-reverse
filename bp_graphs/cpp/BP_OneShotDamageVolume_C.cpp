// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_OneShotDamageVolume_C::UserConstructionScript (45 bytes)
void BP_OneShotDamageVolume_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_OneShotDamageVolume_C::ReceiveActorBeginOverlap (40 bytes)
void BP_OneShotDamageVolume_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_OneShotDamageVolume();
    return;
}

// Recovered Kismet: BP_OneShotDamageVolume_C::ExecuteUbergraph_BP_OneShotDamageVolume (561 bytes)
void BP_OneShotDamageVolume_C::ExecuteUbergraph_BP_OneShotDamageVolume()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_OtherActor->GetComponentsByClass(HealthComponent);
    auto CallFunc_Multiply_FloatFloat_ReturnValue = Damage;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_OtherActor->GetComponentsByClass(HealthComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    return;
}
