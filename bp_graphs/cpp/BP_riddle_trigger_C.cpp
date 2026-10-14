// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_riddle_trigger_C::Destroy (17 bytes)
void BP_riddle_trigger_C::Destroy()
{
    K2_DestroyActor();
    return;
}

// Recovered Kismet: BP_riddle_trigger_C::UserConstructionScript (385 bytes)
void BP_riddle_trigger_C::UserConstructionScript()
{
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = Shockwave->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    FTimerHandle CallFunc_K2_SetTimer_ReturnValue = UKismetSystemLibrary::K2_SetTimer(Duration, false);
    return;
}
