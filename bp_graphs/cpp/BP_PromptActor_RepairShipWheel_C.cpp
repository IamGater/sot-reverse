// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_RepairShipWheel_C::UserConstructionScript (13 bytes)
void BP_PromptActor_RepairShipWheel_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_RepairShipWheel_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_RepairShipWheel_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_RepairShipWheel();
    return;
}

// Recovered Kismet: BP_PromptActor_RepairShipWheel_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_RepairShipWheel_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_RepairShipWheel();
    return;
}

// Recovered Kismet: BP_PromptActor_RepairShipWheel_C::ExecuteUbergraph_BP_PromptActor_RepairShipWheel (394 bytes)
void BP_PromptActor_RepairShipWheel_C::ExecuteUbergraph_BP_PromptActor_RepairShipWheel()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_48;
L_48:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_RepairShipWheel_C);
    BP_Prompt_RepairShipWheel_C* K2Node_DynamicCast_AsBP_Prompt_Repair_Ship_Wheel = Cast<BP_Prompt_RepairShipWheel_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Repair_Ship_Wheel);
    if (!K2Node_DynamicCast_bSuccess) goto L_187;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Repair_Ship_Wheel;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_187;
L_187:
    return;
}
