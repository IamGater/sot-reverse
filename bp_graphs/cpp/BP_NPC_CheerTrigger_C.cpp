// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_NPC_CheerTrigger_C::UserConstructionScript (3 bytes)
void BP_NPC_CheerTrigger_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_NPC_CheerTrigger_C::ReceiveActorBeginOverlap (40 bytes)
void BP_NPC_CheerTrigger_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_NPC_CheerTrigger();
    return;
}

// Recovered Kismet: BP_NPC_CheerTrigger_C::ExecuteUbergraph_BP_NPC_CheerTrigger (569 bytes)
void BP_NPC_CheerTrigger_C::ExecuteUbergraph_BP_NPC_CheerTrigger()
{
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_225716);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_148;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_148:
    bool idx_225717 = false;
    APawn* CallFunc_GetPlayerPawn_ReturnValue = UGameplayStatics::GetPlayerPawn();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = idx_225714;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
    return;
}
