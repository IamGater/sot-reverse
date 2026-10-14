// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_RepairShipMast_C::UserConstructionScript (13 bytes)
void BP_PromptActor_RepairShipMast_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_RepairShipMast_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_RepairShipMast_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_RepairShipMast();
    return;
}

// Recovered Kismet: BP_PromptActor_RepairShipMast_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_RepairShipMast_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_RepairShipMast();
    return;
}

// Recovered Kismet: BP_PromptActor_RepairShipMast_C::ExecuteUbergraph_BP_PromptActor_RepairShipMast (394 bytes)
void BP_PromptActor_RepairShipMast_C::ExecuteUbergraph_BP_PromptActor_RepairShipMast()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_48;
L_48:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_RepairShipMast_C);
    BP_Prompt_RepairShipMast_C* K2Node_DynamicCast_AsBP_Prompt_Repair_Ship_Mast = Cast<BP_Prompt_RepairShipMast_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Repair_Ship_Mast);
    if (!K2Node_DynamicCast_bSuccess) goto L_187;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Repair_Ship_Mast;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_187;
L_187:
    return;
}
