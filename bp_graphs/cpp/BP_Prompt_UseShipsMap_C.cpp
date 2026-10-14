// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_UseShipsMap_C::OnMapTablePinnedFunc (208 bytes)
void BP_Prompt_UseShipsMap_C::OnMapTablePinnedFunc()
{
    auto idx_276007 = InputPin;
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(idx_276023, idx_276007);
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_CD;
    Evaluate();
L_CD:
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::PlayerTakenControlFunc (125 bytes)
void BP_Prompt_UseShipsMap_C::PlayerTakenControlFunc()
{
    MapTableControlPoint* K2Node_DynamicCast_AsMap_Table_Control_Point = Cast<MapTableControlPoint*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMap_Table_Control_Point);
    if (!K2Node_DynamicCast_bSuccess) goto L_7A;
    Evaluate();
L_7A:
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::Evaluate (22 bytes)
void BP_Prompt_UseShipsMap_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_UseShipsMap();
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::PostInitialize (22 bytes)
void BP_Prompt_UseShipsMap_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_UseShipsMap();
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::UnregisterHandles (22 bytes)
void BP_Prompt_UseShipsMap_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_UseShipsMap();
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::OnMapTablePinned (40 bytes)
void BP_Prompt_UseShipsMap_C::OnMapTablePinned()
{
    ExecuteUbergraph_BP_Prompt_UseShipsMap();
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::CustomEvent_0 (40 bytes)
void BP_Prompt_UseShipsMap_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_Prompt_UseShipsMap();
    return;
}

// Recovered Kismet: BP_Prompt_UseShipsMap_C::ExecuteUbergraph_BP_Prompt_UseShipsMap (641 bytes)
void BP_Prompt_UseShipsMap_C::ExecuteUbergraph_BP_Prompt_UseShipsMap()
{
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
L_A1:
    UBasePromptCoordinator::SetPromptAs(idx_276049);
    auto K2Node_SwitchEnum_CmpSuccess = States;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_145;
    K2Node_SwitchEnum_CmpSuccess = States;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_162;
    K2Node_SwitchEnum_CmpSuccess = States;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_A1;
L_145:
    UBasePromptCoordinator::DismissAllPrompts();
    Complete();
L_162:
    UBasePromptCoordinator::SetPromptAs(idx_276047);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    OnMapTablePinnedFunc(K2Node_CustomEvent_Event2);
    PlayerTakenControlFunc(K2Node_CustomEvent_Event);
    return;
}
