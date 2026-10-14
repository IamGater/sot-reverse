// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Riddle_InitializeSequencer_C::OnBeginCustom (943 bytes)
void BP_CT_Riddle_InitializeSequencer_C::OnBeginCustom()
{
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(CallFunc_Array_Get_Item, CallFunc_MakeTransform_ReturnValue);
    BP_RiddlePromptSequencer_C* idx_282300 = Cast<BP_RiddlePromptSequencer_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282300);
    auto idx_282305 = idx_282300;
    auto CallFunc_FlushNetDormancy_ReturnValue6 = idx_282305->this->FlushNetDormancy();
    idx_282305 = idx_282305;
    auto CallFunc_FlushNetDormancy_ReturnValue5 = idx_282305->this->FlushNetDormancy();
    FVector CallFunc_K2_GetActorLocation_ReturnValue2 = idx_282301->K2_GetActorLocation();
    idx_282305 = idx_282305;
    auto CallFunc_FlushNetDormancy_ReturnValue4 = idx_282305->this->FlushNetDormancy();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = idx_282306->K2_GetActorLocation();
    idx_282305 = idx_282305;
    auto CallFunc_FlushNetDormancy_ReturnValue3 = idx_282305->this->FlushNetDormancy();
    idx_282305 = idx_282305;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = idx_282305->this->FlushNetDormancy();
    idx_282305 = idx_282305;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282305->this->FlushNetDormancy();
    idx_282305 = idx_282305;
    return;
}
